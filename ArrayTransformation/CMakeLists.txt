cmake_minimum_required(VERSION 3.11-3.18)

project(ArrayTransformation)

add_library(ArrayTransformation src/ArrayTransformer.cpp 
                                src/Array.cpp
                                src/ArraySort.cpp
                                src/ArrayIntersect.cpp
                                src/ArrayReversedUnion.cpp)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_compile_features(ArrayTransformation PUBLIC cxx_std_20)

add_custom_command(TARGET ArrayTransformation POST_BUILD 
  COMMAND "${CMAKE_COMMAND}" -E copy 
     "$<TARGET_FILE:ArrayTransformation>"
     "../tests/$<CONFIGURATION>/$<TARGET_FILE_NAME:ArrayTransformation>" 
  COMMENT "Copying to tests directory")
