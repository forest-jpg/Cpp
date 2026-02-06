include(FetchContent)

cmake_policy(SET CMP0135 NEW)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

file(GLOB TEST_SOURCES "*_test.cpp")

add_executable(all_tests ${TEST_SOURCES})
target_link_libraries(all_tests gtest_main)

include(GoogleTest)
gtest_discover_tests(all_tests)