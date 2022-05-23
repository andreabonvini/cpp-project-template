//
// Created by Andrea Bonvini on 20/05/22.
//

#ifndef CPP_PROJECT_TEMPLATE_TEST_LIBRARY_H
#define CPP_PROJECT_TEMPLATE_TEST_LIBRARY_H

#include "../src/library.h"

#include <gtest/gtest.h>


namespace cpp_project_template::tests {
    TEST(TestFooSuite,TestFoo){
        foo();
    }
    TEST(TestBarSuite,TestBarGreaterThanZero){
        // bar(100);
    }
    TEST(TestBarSuite,TestBarEqualToZero){
        bar(0);
    }
    TEST(TestBarSuite,TestBarLessThanZero){
        bar(-100);
    }
}

#endif //CPP_PROJECT_TEMPLATE_TEST_LIBRARY_H
