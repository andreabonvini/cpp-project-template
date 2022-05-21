//
// Created by Andrea Bonvini on 20/05/22.
//

#ifndef GCOV_TUTORIAL_TEST_LIBRARY_H
#define GCOV_TUTORIAL_TEST_LIBRARY_H

#include "../src/library.h"

#include <gtest/gtest.h>


namespace gcov_tutorial::tests {
    TEST(TestFooSuite,TestFoo){
        foo();
    }
    TEST(TestBarSuite,TestBarGreaterThanZero){
        bar(100);
    }
    TEST(TestBarSuite,TestBarEqualToZero){
        //bar(0);
    }
    TEST(TestBarSuite,TestBarLessThanZero){
        bar(-100);
    }
}

#endif //GCOV_TUTORIAL_TEST_LIBRARY_H
