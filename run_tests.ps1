# PowerShell script to configure, build, and run tests via CMake/CTest

param(
    # Run only tests matching this filename (e.g., "at_samples_112_a_iai_test.cpp")
    [string]$TestFile
)

# Resolve repo root (script location) and build directory
$scriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$buildDir = Join-Path $scriptDir "build"

# Run commands from repo root for stable relative paths
Push-Location $scriptDir
try {
    # Check if reconfiguration is needed
    $testFilesChanged = $false
    if (Test-Path $buildDir) {
        $cmakeCacheTime = (Get-Item "$buildDir/CMakeCache.txt" -ErrorAction SilentlyContinue).LastWriteTime
        if ($cmakeCacheTime) {
            $testFiles = Get-ChildItem "tests/*_test.cpp" -ErrorAction SilentlyContinue
            foreach ($file in $testFiles) {
                if ($file.LastWriteTime -gt $cmakeCacheTime) {
                    $testFilesChanged = $true
                    break
                }
            }
        }
    }

    # Configure if build directory does not exist or test files were modified
    if (-not (Test-Path $buildDir) -or $testFilesChanged) {
        cmake -S . -B $buildDir -G "MinGW Makefiles" -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++
        if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
    }

    # Build all targets
    cmake --build $buildDir
    if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

    # Run tests
    if ($TestFile) {
        # Extract test name pattern from filename (e.g., "at_samples_112_a_iai_test.cpp" -> "at_samples_112_a_iai")
        $filename = [System.IO.Path]::GetFileNameWithoutExtension($TestFile)
        $testNamePattern = $filename -replace '_test$', ''
        ctest -R $testNamePattern --test-dir $buildDir --output-on-failure 
    } else {
        ctest --test-dir $buildDir --output-on-failure
    }
    if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

    # Generate lcov coverage file for VS Code coverage tools and CMake Tools
    $gcovr = Get-Command gcovr -ErrorAction SilentlyContinue
    if ($gcovr) {
        # Generate lcov coverage file
        $buildCoverage = Join-Path $buildDir "coverage.info"
        gcovr -r . $buildDir --filter "^src/" --exclude-throw-branches --exclude-unreachable-branches --lcov -o $buildCoverage
        if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

        # Generate HTML coverage report for local viewing
        $coverageDir = Join-Path $buildDir "coverage"
        if (-not (Test-Path $coverageDir)) {
            New-Item -ItemType Directory -Path $coverageDir | Out-Null
        }
        $buildCoverageReport = Join-Path $coverageDir "coverage.html"
        gcovr -r . $buildDir --filter "^src/" --exclude-throw-branches --exclude-unreachable-branches --html-details $buildCoverageReport
        if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
    }
}
finally {
    # Restore original working directory
    Pop-Location
}
