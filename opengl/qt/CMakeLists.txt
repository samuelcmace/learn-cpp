cmake_minimum_required(VERSION 3.0.0)

project(opengl-qt VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5Core)
find_package(Qt5Gui)

set(HEADERS
    display.h
    shader.h
)

set(SOURCES
    main.cpp
    display.cpp
    shader.cpp
)

set(RESOURCES
    res/resources.qrc
)

add_executable(${PROJECT_NAME} ${SOURCES} ${RESOURCES})

target_link_libraries(${PROJECT_NAME} Qt5::Core)
target_link_libraries(${PROJECT_NAME} Qt5::Gui)
