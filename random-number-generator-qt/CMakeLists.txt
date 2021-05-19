cmake_minimum_required(VERSION 3.0)
project(random-number-generator-qt)

find_package(Qt5 COMPONENTS Core REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} Qt5::Core)
