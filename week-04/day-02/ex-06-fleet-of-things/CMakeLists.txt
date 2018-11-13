cmake_minimum_required(VERSION 3.12)
project(ex_06_fleet_of_things)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex_06_fleet_of_things main.cpp fleet.cpp fleet.h thing.cpp thing.h)