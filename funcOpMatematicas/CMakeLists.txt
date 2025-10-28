cmake_minimum_required(VERSION 4.0)
project(ex01 C)

set(CMAKE_C_STANDARD 11)

add_executable(ex01 main.c
        operacao.c
        operacao.h
        ../funcConverterTemp/main.c
        ../funcConverterTemp/conversor.c)
