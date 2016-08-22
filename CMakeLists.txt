
cmake_minimum_required(VERSION 2.6)

project(GTestSample)

# searches *.cc saves the list to SOURCES 
# file(GLOB SOURCES "*.cc")

include_directories("/usr/local/include")
set(GTEST_LIB_DIR /usr/local/lib)
set(srcs sample1_main.cc sample1.cc)
set( CMAKE_VERBOSE_MAKEFILE on )
set(CMAKE_BUILD_TYPE Release)
link_directories(${GTEST_LIB_DIR})

add_executable(GTestSample run_sample1_gtest.cc sample1.cc sample1_unittest.cc)
target_link_libraries(GTestSample libgtest.a)

