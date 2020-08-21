cmake_minimum_required(VERSION 3.17)
project(unit_testing_01_gtest)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_subdirectory(src)
add_subdirectory(tst)
add_subdirectory(lib/googletest)