cmake_minimum_required(VERSION 3.20)
project(test C)

set(CMAKE_C_STANDARD 11)

add_executable(test
        input.c
        leapYear.c
        test.c)
