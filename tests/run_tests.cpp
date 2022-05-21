//
// Created by Andrea Bonvini on 20/05/22.
//

// A good resource to understand how you should structure your C++ tests with GoogleTest is
//   https://github.com/google/googletest/blob/main/docs/primer.md

#include <gtest/gtest.h>
#include "test_library.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}