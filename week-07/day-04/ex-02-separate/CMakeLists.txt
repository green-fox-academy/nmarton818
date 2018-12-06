cmake_minimum_required(VERSION 3.12)
project(ex_02_separate C)

set(CMAKE_C_STANDARD 99)

add_executable(ex_02_separate main.c circle.c circle.h)