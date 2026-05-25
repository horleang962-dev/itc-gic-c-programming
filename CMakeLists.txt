cmake_minimum_required(VERSION 4.1)
project(Udemy_programing_C C)

set(CMAKE_C_STANDARD 11)

add_executable(Udemy_programing_C main.c)


add_executable(new_target 05-variable-and-data-type/perform-math-calculations/rectangle.c 05-variable-and-data-type/perform-math-calculations/rectangle.h
        05-variable-and-data-type/perform-math-calculations/main.c)
add_executable(new_target1 05-variable-and-data-type/enum/enum-company.c)
add_executable(new_target2 05-variable-and-data-type/variables-and-data-type/main.c)
