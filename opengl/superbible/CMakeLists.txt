cmake_minimum_required(VERSION 3.1.0)

project(opengl)

set(FREEGLUT_BUILD_DEMOS OFF CACHE BOOL "" FORCE)
set(FREEGLUT_BUILD_STATIC_LIBS OFF CACHE BOOL "" FORCE)

add_subdirectory(include/glew/build/cmake)
add_subdirectory(include/freeglut)

add_executable(2-1 chapter_2/listing_2-1.cpp)
target_link_libraries(2-1 glew)
target_link_libraries(2-1 glut)

add_executable(2-2 chapter_2/listing_2-2.cpp)
target_link_libraries(2-2 glew)
target_link_libraries(2-2 glut)
