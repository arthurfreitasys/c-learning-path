cmake_minimum_required(VERSION 4.0)
project(ex02 C)

set(CMAKE_C_STANDARD 11)

add_executable(funcConverterTemp main.c
        conversor.c
        conversor.h)
