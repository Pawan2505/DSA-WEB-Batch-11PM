// Description: Demonstrates namespace usage and scope resolution operator.

#include<iostream>

// Defining namespaces
namespace na {
    int a = 100;
}
namespace nb {
    int a = 200;
}

int a = 60;  // Global variable

int main() {
    std::cout << "Global a: " << ::a << std::endl;  // Scope resolution operator (::) for global variable
    std::cout << "Namespace na a: " << na::a << std::endl;  // Accessing variable from na namespace
    std::cout << "Namespace nb a: " << nb::a << std::endl;  // Accessing variable from nb namespace

    int a = 10;
    std::cout << "Local a: " << a << std::endl;  // Output: 10

    {
        int a = 20;
        std::cout << "Block scoped a: " << a << std::endl;  // Output: 20
    }

    std::cout << "Local a after block: " << a << std::endl;  // Output: 10

    return 0;
}
