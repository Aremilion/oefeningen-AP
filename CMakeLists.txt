cmake_minimum_required(VERSION 4.2)
project(oefeningen_AP)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(oefeningen_AP
        main.cpp
        Polynomials.cpp
        Polynomials.h
        Plotter.cpp
        Plotter.h
)
