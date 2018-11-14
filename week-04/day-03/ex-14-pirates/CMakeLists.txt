cmake_minimum_required(VERSION 3.12)
project(ex_14_pirates)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex_14_pirates main.cpp pirate.cpp pirate.h cmake-build-debug/ship.cpp cmake-build-debug/ship.h)