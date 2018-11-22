cmake_minimum_required(VERSION 3.12)
project(ex_01_apple)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex_01_apple main.cpp apple/apple.cpp apple/apple.h)