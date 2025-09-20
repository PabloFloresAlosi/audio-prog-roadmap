cmake_minimum_required(VERSION 3.22)
project(gtest_check LANGUAGES CXX)

find_package(GTest CONFIG REQUIRED)
enable_testing()

add_executable(sample_test main.cpp)
target_link_libraries(sample_test PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(sample_test)
