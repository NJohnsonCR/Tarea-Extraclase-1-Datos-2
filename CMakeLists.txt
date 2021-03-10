cmake_minimum_required(VERSION 3.17)
project(Tarea_Extraclase_1_Datos_2)

set(CMAKE_CXX_STANDARD 14)

SET(CMAKE_CXX_FLAGS_DEBUG "-g")

add_executable(Tarea_Extraclase_1_Datos_2 main.cpp src/Collector/Collector.cpp src/Collector/Collector.h src/Node/Node.cpp src/Node/Node.h src/LinkedList/LinkedList.cpp src/LinkedList/LinkedList.h)