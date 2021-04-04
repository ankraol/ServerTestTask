cmake_minimum_required(VERSION 3.11-3.18)

project(ArrayTransformer)

add_executable(ArrayTransformer main.cpp)

target_link_libraries(ArrayTransformer
    PRIVATE ArrayTransformation)

target_compile_features(ArrayTransformer PUBLIC cxx_std_20)