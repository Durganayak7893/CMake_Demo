cmake_minimum_required(VERSION 3.10)

project(MyProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(MathLib SHARED
    math.cpp
)

target_include_directories(MathLib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(MyProject
    main.cpp
)

target_link_libraries(MyProject
    PRIVATE MathLib
)

enable_testing()

add_test(
    NAME MathTest
    COMMAND MyProject
)
