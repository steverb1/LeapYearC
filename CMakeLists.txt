cmake_minimum_required(VERSION 3.14)
project(LeapYearCheckerTest)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.14.0
)

FetchContent_MakeAvailable(googletest)

enable_testing()

file(GLOB sources "src/*.c")

add_executable(
  LeapYearCheckerTest
  tests/LeapYearCheckerTest.cpp
  ${sources}
)

target_link_libraries(
  LeapYearCheckerTest
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(LeapYearCheckerTest)
