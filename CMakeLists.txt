cmake_minimum_required(VERSION 3.26)
project(lab_15 C)

set(CMAKE_C_STANDARD 11)

add_executable(lab_15 main.c
        libs/algorithms/array/array.c
        libs/algorithms/array/array.h
        libs/algorithms/algorithm.c
        libs/algorithms/algorithm.h
        libs/data_structures/matrix/matrix.c
        libs/data_structures/matrix/matrix.h
)

add_subdirectory(libs)
target_link_libraries(lab_15 data_structures)
target_link_libraries(lab_15 algorithms)
