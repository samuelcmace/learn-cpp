cmake_minimum_required(VERSION 2.8)
project(rpg)

set(SOURCES
    main.cpp
    input.cpp
    input.h
)

add_executable(${PROJECT_NAME} ${SOURCES})
