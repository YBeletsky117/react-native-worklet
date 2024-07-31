cmake_minimum_required(VERSION 3.4.1)
project(ReactNativeWorklet)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 14)

add_library(beletsky-react-native-worklet            SHARED
            ../cpp/beletsky-react-native-worklet.cpp
            cpp-adapter.cpp
)

# Specifies a path to native header files.
include_directories(
            ../cpp
)
