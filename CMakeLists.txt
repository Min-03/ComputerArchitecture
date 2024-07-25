cmake_minimum_required(VERSION 3.25)
project(C)

set(CMAKE_C_STANDARD 11)

add_executable(main.c)

add_executable(test test.c)
add_executable(main main.c)