cmake_minimum_required(VERSION 3.9.0)
set(projectName QtOpenGL)
project(${projectName})

set(CMAKE_AUTOMOC ON)
add_definitions(-DSHADER_DIR="${CMAKE_CURRENT_SOURCE_DIR}/shader/")

find_package(Qt5Widgets)

include_directories(${Qt5Widgets_INCLUDE_DIRS})

file(GLOB HEADER_FILES "src/*.h")

file(GLOB SRC_FILES "src/*.cpp")

add_executable(${projectName} main.cpp ${HEADER_FILES} ${SRC_FILES})

target_link_libraries(${projectName} Qt5::Widgets)