cmake_minimum_required(VERSION 3.12)
project(ex_04_devices)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex_04_devices main.cpp printer.cpp printer.h printer2d.cpp printer2d.h printer3d.cpp printer3d.h scanner.cpp scanner.h copier.cpp copier.h)