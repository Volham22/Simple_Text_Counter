# CMake config file :

cmake_minimum_required(VERSION 2.4)

set(CMAKE_CXX_FLAGS_DEBUG "-Wall -Werror")
set(CMAKE_CXX_FLAGS_RELEASE "-02 -Wall")

set(SRC
    Counter.cpp
    counting.cpp
    help.cpp
    main.cpp)

include_directories(.)

set(EXECUTABLE_NAME Text_Counter)

add_executable(${EXECUTABLE_NAME} ${SRC})