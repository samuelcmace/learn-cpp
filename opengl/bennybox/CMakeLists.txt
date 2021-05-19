cmake_minimum_required(VERSION 3.1.0)

project(opengl)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(include/sdl2)
add_subdirectory(include/glew/build/cmake)

set(HEADERS
    display.h
    shader.h
)

set(SOURCES
    main.cpp
    display.cpp
    shader.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} SDL2)
target_link_libraries(${PROJECT_NAME} glew)
