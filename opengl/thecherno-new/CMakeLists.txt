cmake_minimum_required(VERSION 3.1.0)

project(opengl)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
add_subdirectory(include/glfw)
include_directories(include/glfw/include)

set(GLEW_USE_STATIC_LIBS true)
set(GLEW_VERBOSE true)
add_subdirectory(include/glew/build/cmake)
include_directories(include/glew/include)


set(SOURCES
    main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} glfw)
target_link_libraries(${PROJECT_NAME} glew_s)