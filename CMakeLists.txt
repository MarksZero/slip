cmake_minimum_required(VERSION 3.26)
project(slip)

set(CMAKE_CXX_STANDARD 17)

add_executable(slip main.cpp
        desempaquetado.cpp
        desempaquetado.h
        empaquetado.cpp
        empaquetado.h
        empaquetado.h)
