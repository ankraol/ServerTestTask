cmake_minimum_required(VERSION 3.11-3.18)

project(
    ServerTeamTask
    VERSION 0.1
    DESCRIPTION "Test C++ ServerTeam Task")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

add_subdirectory(ArrayTransformation)   # look in ArrayTransformation subdirectory for CMakeLists.txt to process
add_subdirectory(apps)    # look in apps subdirectory for CMakeLists.txt to process
add_subdirectory(tests)
