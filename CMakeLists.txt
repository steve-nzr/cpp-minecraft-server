# CMakeLists.txt
cmake_minimum_required(VERSION 3.0)
project(test)

# Find dependencies provided by vcpkg (via vcpkg.cmake)
find_package(fmt CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)

# main target
add_executable(main)
file(GLOB_RECURSE src src/*.cpp)
target_sources(main PRIVATE ${src})
target_link_libraries(main PRIVATE fmt::fmt)
set_property(TARGET main PROPERTY CXX_STANDARD 20)

# tests target
add_executable(tests)
file(GLOB_RECURSE tests tests/*.cpp)
target_sources(tests PRIVATE ${tests})
target_link_libraries(tests PRIVATE fmt::fmt GTest::gtest GTest::gtest_main)
set_property(TARGET tests PROPERTY CXX_STANDARD 20)
enable_testing()
add_test(tests tests)
