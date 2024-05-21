add_library(data_structures
        matrix/matrix.c
        tests/test.h
        tests/test.c
)
target_link_libraries(data_structures algorithms)