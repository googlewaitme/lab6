cmake_minimum_required(VERSION 3.23)

project(lab4)

set(CMAKE_CXX_VERSION 17)

file(GLOB_RECURSE SOURCES 
	src/*.cpp
	src/*.h
	src/*.hpp
	)

add_executable(lab4 ${SOURCES})

