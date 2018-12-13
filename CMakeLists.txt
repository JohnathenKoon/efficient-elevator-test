cmake_minimum_required(VERSION 3.12)
project(elevator_simulator)

set(CMAKE_CXX_STANDARD 17)

add_executable(elevator_simulator main.cpp Elevator.cpp Elevator.h)