cmake_minimum_required(VERSION 3.5.0)
project(TP2 VERSION 0.1.0 LANGUAGES C)

add_executable(
    TP2 main.c 
    lists/listHandler.h lists/listHandler.c
    students/students.h students/students.c
)