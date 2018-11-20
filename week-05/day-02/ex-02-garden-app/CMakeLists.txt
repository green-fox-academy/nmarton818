cmake_minimum_required(VERSION 3.12)
project(ex_02_garden_app)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex_02_garden_app main.cpp flower.cpp flower.h plant.cpp plant.h tree.cpp tree.h garden.cpp garden.h)