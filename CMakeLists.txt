cmake_minimum_required(VERSION 3.6.2)
project (simple_cmake)

# include headers
include_directories(include)

# include source file
file(GLOB SOURCES "src/*.cpp")


message("-- Generator is " ${CMAKE_GENERATOR})
message("-- Cmake system Type: " ${CMAKE_SYSTEM_NAME})
message("-- Project binaray dir: " ${PROJECT_BINARY_DIR})

SET( CMAKE_VERBOSE_MAKEFILE on )  # make debug flag
# set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LANGUAGE_STANDARD "c++0x")
# set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LIBRARY "libc++")
IF(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
	set(CMAKE_CXX_FLAGS "-std=c++1y -stdlib=libc++ -Wall")
	set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -stdlib=libc++")
else (${CMAKE_SYSTEM_NAME} MATCHES "Linux")
	set(CMAKE_CXX_FLAGS "-std=c++1y -Wall")
	set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS}")
endif()

add_executable(a.out ${SOURCES})
