cmake_minimum_required(VERSION 3.22)
project(learn_cpp)

set(CMAKE_CXX_STANDARD 20)

include(./build/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(test-1 test/src/main.cpp)

add_executable(test-2 test-2/src/main.cpp)

add_executable(fave-num fave-num/src/main.cpp)

add_executable(say-hi say-hi/src/main.cpp)

add_executable(sqft sqft/src/main.cpp)

enable_testing()
add_executable(kata kata/kata.cpp kata/kata-test.cpp)
target_link_libraries(kata ${CONAN_LIBS})