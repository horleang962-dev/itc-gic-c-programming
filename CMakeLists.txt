cmake_minimum_required(VERSION 4.1)
project(Udemy_programing_C C)

set(CMAKE_C_STANDARD 11)

add_executable(Udemy_programing_C main.c)

add_executable(new_target 03_section/01_test.c)


add_executable(new_target1 04_section/01.c 04_section/01.h
        04_section/main.c)
add_executable(new_target2 test/01.c
        test/02.c
        test/main.c
        test/main.h)
add_executable(new_target3 05/01.c 05/01.h
        05/02.c
        05/02.h
        05/main.c)
