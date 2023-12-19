cmake_minimum_required(VERSION 2.8)
project(DRLab CXX)
SET(CMAKE_BUILD_TYPE "Release")
SET(CMAKE_CXX_FLAGS "-std=c++11")

find_package(MPI REQUIRED)

set(SRC_DIR src/)
set(APP_DIR apps/)
set(TEST_DIR tests/)
set(INC_DIR ${PROJECT_SOURCE_DIR}/inc/)

#add includes
include_directories(${MPI_CXX_INCLUDE_PATH})
set(INCS algorithm core grid helper io lbm parallelism pipt)
foreach(inc ${INCS})
    include_directories(${INC_DIR}${inc}/)
endforeach(inc)

add_subdirectory(${SRC_DIR})
add_subdirectory(${APP_DIR})
add_subdirectory(${TEST_DIR})
