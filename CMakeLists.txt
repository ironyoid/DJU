cmake_minimum_required(VERSION 3.13.0)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

project(dju)
set(CMAKE_GENERATOR "Unix Makefiles")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCES main.cpp)
set(INCLUDE_DIRS ./)

add_executable(dju ${SOURCES})

target_include_directories(dju PUBLIC ${INCLUDE_DIRS})
target_compile_options(dju PRIVATE -g)
