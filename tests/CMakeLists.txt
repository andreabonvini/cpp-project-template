# FetchContent is one of the modules which are part of the CMake distribution, we use it mainly to load an external
#  project such as, in this case, GoogleTest.
include(FetchContent)

# Automatically fetch googletest from github...
# Note that the following declaration is valid today (December 4th, 2021), if CMake gives you trouble it may be 'cause
#  the GIT_TAG changed (e.g. once it was "master" instead of "main"), so just check it on the official repo...
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        main
)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)
enable_testing()

# We define a single executable (RunTests) that will run all the available tests.
add_executable(
        RunTests run_tests.cpp
        ../src/library.cpp
        ../src/library.h
)

target_link_libraries(RunTests gtest gtest_main)

gtest_discover_tests(RunTests)

