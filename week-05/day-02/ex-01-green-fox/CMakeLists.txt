cmake_minimum_required(VERSION 3.12)
project(ex_01_green_fox)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex_01_green_fox main.cpp person.cpp person.h student.cpp student.h mentor.cpp mentor.h sponsor.cpp sponsor.h cohort.cpp cohort.h)