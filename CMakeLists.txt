cmake_minimum_required(VERSION 3.16)
project(LinearCoherentGeneratorExperiment)

set(CMAKE_CXX_STANDARD 20)

add_executable(LinearCoherentGeneratorExperiment config.h experiment.cpp experiments.h generator.cpp generator.h
        num_threads.cpp num_threads.h main.cpp)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -fopenmp")