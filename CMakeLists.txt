cmake_minimum_required(VERSION 4.1)
project(Udemy_programing_C C)

set(CMAKE_C_STANDARD 11)

add_executable(Udemy_programing_C main.c)

add_executable(new_target 05_variable_and_data_type/main.c 05_variable_and_data_type/main.h
        05_variable_and_data_type/exercise.c)
