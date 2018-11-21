cmake_minimum_required(VERSION 3.12)
project(ex_02_animals_in_zoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex_02_animals_in_zoo main.cpp animal.cpp animal.h mammal.cpp mammal.h reptile.cpp reptile.h bird.cpp bird.h)