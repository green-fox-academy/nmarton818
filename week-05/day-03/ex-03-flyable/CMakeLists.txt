cmake_minimum_required(VERSION 3.12)
project(ex_03_flyable)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex_03_flyable main.cpp vehicle.cpp vehicle.h animal.cpp animal.h flyable.cpp flyable.h helicopter.cpp helicopter.h bird.cpp bird.h)