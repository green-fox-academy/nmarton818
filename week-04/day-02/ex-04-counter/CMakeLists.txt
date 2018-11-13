cmake_minimum_required(VERSION 3.12)
project(ex_04_counter)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex_04_counter main.cpp counter.cpp counter.h)