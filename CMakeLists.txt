cmake_minimum_required(VERSION 3.16)

project(cpp-demo-105-106)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SRC src/*.cpp src/*.cxx)

include_directories(include)

if (LINUX)
 list(APPEND COMMON_DEPS m)
endif()

add_executable("${PROJECT_NAME}" ${SRC})

target_link_libraries("${PROJECT_NAME}" ${COMMON_DEPS})

