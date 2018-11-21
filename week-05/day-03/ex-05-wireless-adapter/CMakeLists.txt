cmake_minimum_required(VERSION 3.12)
project(ex_05_wireless_adapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex_05_wireless_adapter main.cpp device.cpp device.h usbdevice.cpp usbdevice.h networkdevice.cpp networkdevice.h networkadapter.cpp networkadapter.h)