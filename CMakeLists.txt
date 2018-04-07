cmake_minimum_required(VERSION 2.7)

set(CMAKE_BUILD_TYPE Debug)

project(pins) # VERSION 1.4.0)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")

set(CMAKE_MACOSX_RPATH 1)

set(CMAKE_C_FLAGS_DEBUG     "${CMAKE_C_FLAGS_DEBUG}     -fPIC -Wall -DHAVE_SYLVAN -DDEBUG=1 -g -O0")
set(CMAKE_CPP_FLAGS_DEBUG   "${CMAKE_CPP_FLAGS_DEBUG}   -fPIC -Wall -DDEBUG=1 -g -O0")
set(CMAKE_CXX_FLAGS_DEBUG   "${CMAKE_CXX_FLAGS_DEBUG}   -fPIC -Wall -DDEBUG=1 -g -O0")
set(CMAKE_LD_FLAGS_DEBUG    "${CMAKE_LD_FLAGS_DEBUG}    -g")
set(CMAKE_C_FLAGS_RELEASE   "${CMAKE_C_FLAGS_RELEASE}   -fPIC -Wall -DHAVE_SYLVAN")
set(CMAKE_CPP_FLAGS_RELEASE "${CMAKE_CPP_FLAGS_RELEASE} -fPIC -Wall")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -fPIC -Wall")
set(CMAKE_LD_FLAGS_RELEASE  "${CMAKE_LD_FLAGS_RELEASE}")

include_directories(src third-party)

add_subdirectory(src)

add_subdirectory(third-party/ltl2ba)
add_subdirectory(third-party/lemon)
add_subdirectory(third-party/sylvan)

add_subdirectory(examples)
add_custom_target(examples)
add_dependencies(examples all_examples)

set(RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}")

