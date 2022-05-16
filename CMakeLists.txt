cmake_minimum_required(VERSION 3.22)
project(learn_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(test
        test/src/main.cpp)

add_executable(test-2
        test-2/src/main.cpp)

add_executable(fave-num
        fave-num/src/main.cpp)

add_executable(say-hi
        say-hi/src/main.cpp)

add_executable(sqft
        sqft/src/main.cpp)