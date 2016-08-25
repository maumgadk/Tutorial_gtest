
cmake_minimum_required(VERSION 2.6)

project(GTestSample)
Project(RunSample)
# searches *.cc saves the list to SOURCES 
# file(GLOB SOURCES "*.cc")

message(STATUS "Hi!")
include_directories("/usr/local/include")
set(GTEST_LIB_DIR /usr/local/lib)
set(srcs sample_main.cc sample.cc)
set( CMAKE_VERBOSE_MAKEFILE on )
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_BUILD_DIR ./build)
link_directories(${GTEST_LIB_DIR})

add_executable(GTestSample run_sample_gtest.cc sample.cc sample_unittest.cc)
target_link_libraries(GTestSample libgtest.a)

add_executable(RunSample sample_main.cc sample.cc)


