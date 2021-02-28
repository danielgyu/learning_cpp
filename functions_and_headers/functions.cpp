#include <iostream>
using std::cout;

#include "function_header.h"

int main(){

    if (test(true)) {
        cout << "Test true is true" << std::endl;
    }

    if (test(3.2)) {
        cout << "Test 3.2 is true" << std::endl;
    }

}
