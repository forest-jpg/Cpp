# PowerShell script to compile and run a C++ file using g++

# Extract the filename
param(
    [string]$file
)
$dir = [System.IO.Path]::GetDirectoryName($file)
$name = [System.IO.Path]::GetFileNameWithoutExtension($file)

# Remember the original working directory so we can return later
$d = Get-Location

# Run the compile/execute flow inside the script's directory
Set-Location $dir

# Ensure a shared bin output folder exists next to the original cwd
if (!(Test-Path "$d\\bin")) { 
    mkdir "$d\\bin" 
}

# Build the current file to bin/<filename>.exe using g++
g++ -std=gnu++23 -Wall -Wextra -O2 -DONLINE_JUDGE "$file" -o "$d\\bin\\$name.exe"

# Execute the freshly built binary
& "$d\\bin\\$name.exe"
# Restore the original working directory
Set-Location $d