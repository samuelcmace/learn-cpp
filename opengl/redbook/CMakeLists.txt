cmake_minimum_required(VERSION 3.1.0)

project(opengl)

set(FREEGLUT_BUILD_DEMOS OFF CACHE BOOL "" FORCE)
set(FREEGLUT_BUILD_STATIC_LIBS OFF CACHE BOOL "" FORCE)

add_subdirectory(include/glew/build/cmake)
add_subdirectory(include/freeglut)

add_executable(1-2 chapter_1/example_1-2.c)
target_link_libraries(1-2 glew)
target_link_libraries(1-2 glut)

add_executable(1-3 chapter_1/example_1-3.c)
target_link_libraries(1-3 glew)
target_link_libraries(1-3 glut)

add_executable(2-5 chapter_2/example_2-5.c)
target_link_libraries(2-5 glew)
target_link_libraries(2-5 glut)

add_executable(2-6 chapter_2/example_2-6.c)
target_link_libraries(2-6 glew)
target_link_libraries(2-6 glut)
