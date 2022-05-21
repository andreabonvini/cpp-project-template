#include "library.h"

#include <iostream>

void foo(){
    std::cout << "Foo!" << std::endl;
}

void bar(int n){
    if (n > 0){
        std::cout << "n is grater than 0!" << std::endl;
    }
    else if (n < 0){
        std::cout << "n is less than 0!" << std::endl;
    }
    else{
        stad::cout << "n is exactly 0!" << std::endl;
    }
}

void baz(){  // LCOV_EXCL_START
    std::cout << "Baz!" << std::endl;
}
// LCOV_EXCL_STOP
