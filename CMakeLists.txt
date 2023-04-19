cmake_minimum_required(VERSION 3.25)
project(SLR)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SLR
        DataSet.cpp
        DataSet.hpp
        DiscreteMaths.cpp
        DiscreteMaths.hpp
        main.cpp
        SLR.hpp
        SLR.cpp Statistics.hpp Statistics.cpp)
