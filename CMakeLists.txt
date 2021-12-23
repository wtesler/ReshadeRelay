cmake_minimum_required(VERSION 3.21)
project(ReshadeRelay)

set(CMAKE_CXX_STANDARD 20)

include_directories(${ReshadeRelay_SOURCE_DIR}/reshade)

add_library(ReshadeRelay SHARED relay.cpp)
