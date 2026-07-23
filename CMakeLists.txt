cmake_minimum_required(VERSION 3.20)

project(
    Atlas
    VERSION 0.1.0
    DESCRIPTION "GPU Accelerated Autonomous Indoor Robot"
    LANGUAGES CXX
)

include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.17.0
)

FetchContent_MakeAvailable(googletest)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(atlas_common)
add_subdirectory(apps/atlas_demo)

enable_testing()
add_subdirectory(tests)