cmake_minimum_required(VERSION 3.17)
project(unit_testing_01_basic)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(unit_testing_01_basic
        CMakeLists.txt main.cpp Person.cpp Person.h Professor.cpp Professor.h Student.cpp Student.h ISalary.cpp ISalary.h Administrative.cpp Administrative.h)
