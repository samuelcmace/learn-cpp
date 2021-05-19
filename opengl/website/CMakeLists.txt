cmake_minimum_required(VERSION 2.8)
project(opengl)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(include/glfw-3.3.2)
include_directories(include/glfw-3.3.2/include)

include_directories(include/glad/include)

set(SOURCES
    main.cpp
    include/glad/src/glad.c
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} glfw)