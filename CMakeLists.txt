cmake_minimum_required(VERSION 3.12)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/)

message(STATUS Source dir: ${CMAKE_SOURCE_DIR})


include(${CMAKE_SOURCE_DIR}/cmake/config.cmake)

include(${CMAKE_SOURCE_DIR}/cmake/target.cmake)
