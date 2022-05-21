cmake_minimum_required(VERSION 3.20)
project(gcov_tutorial)

set(CMAKE_CXX_STANDARD 17)

if(CODE_COVERAGE)
    SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage" )
    # add_link_options(--coverage -lgcov)
endif()


add_subdirectory(src)
add_subdirectory(tests)
