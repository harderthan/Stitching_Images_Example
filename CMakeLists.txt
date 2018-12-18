# kheo1772@gmail.com, Github: Harderthan
cmake_minimum_required(VERSION 3.10)
project(Study_ConputerVision)
set(CMAKE_CXX_STANDARD 14)

find_package(OpenCV REQUIRED)

include_directories(include)

set(SOURCES ./src/main.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${OpenCV_Libraries})