cmake_minimum_required(VERSION 3.5)

project(Ep002App
        VERSION 0.1
        DESCRIPTION "first step with cmake"
        LANGUAGES CXX)

add_executable(Ep002AppBinary main.cpp src/dog.cpp)

target_compile_features(Ep002AppBinary PRIVATE cxx_std_20)

target_include_directories(Ep002AppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)