cmake_minimum_required(VERSION 3.12)
project(practice C)

set(CMAKE_C_STANDARD 99)

add_executable(practice main.c linked_list.h linked_list.c)