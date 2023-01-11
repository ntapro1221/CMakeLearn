cmake_minimum_required(VERSION 3.5)

project(Ep002App
        VERSION 0.1
        DESCRIPTION "first step with cmake"
        LANGUAGES CXX)

add_executable(Ep002AppBinary main.cpp src/dog.cpp)

target_compile_features(Ep002AppBinary PUBLIC cxx_std_20)

target_include_directories(Ep002AppBinary PUBLIC include)

target_link_libraries(Ep002AppBinary PUBLIC SDL2 SDL2main)