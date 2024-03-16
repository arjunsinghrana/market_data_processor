cmake_minimum_required(VERSION 3.15)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(MARKET-DATA-PROCESSOR)

# The compiled library code is here
# add_subdirectory(src)

set(SOURCES main.cpp)
add_executable(main.out ${SOURCES})

# enable_testing()

# # The compiled library code is here
# add_subdirectory(test)