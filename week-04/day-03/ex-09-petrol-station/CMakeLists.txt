cmake_minimum_required(VERSION 3.12)
project(ex_09_petrol_station)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex_09_petrol_station main.cpp station.cpp station.h car.cpp car.h)