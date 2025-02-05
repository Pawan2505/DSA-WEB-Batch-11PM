#include<iostream>
// using namespace std;

namespace na {
    int a = 100;  // Variable inside 'na' namespace
}

namespace nb {
    int a = 200;  // Variable inside 'nb' namespace
}

int a = 60;  // Global variable

int main() {
    std::cout << na::a << std::endl;  // Access 'a' from namespace 'na' -> Output: 100
    int a = 10;  // Local variable 'a'
    std::cout << a << std::endl;   // Output: 10 (local 'a')

    {
        int a = 20;  // Local variable 'a' inside inner block
        std::cout << a << std::endl;  // Output: 20 (inner block 'a')
    }

    // Local 'a' is still 10 here
    a = 60;
    std::cout << a << std::endl;  // Output: 10 (local 'a' is still 10)

    // Accessing global and namespace variables using scope resolution
    std::cout << ::a << std::endl;  // Access global 'a' using '::' -> Output: 60
    std::cout << na::a << std::endl;  // Access 'a' from namespace 'na' -> Output: 100
    std::cout << nb::a << std::endl;  // Access 'a' from namespace 'nb' -> Output: 200

    return 0;
}
