// Description: Demonstrates the use of `const` to declare constants in C++.

#include<iostream>  
using namespace std;  

int main() {  
    const int num = 10;  // `const` keyword makes num immutable  

    // num = 20;  // ❌ Not allowed (Assignment to const variable)  

    cout << "Constant value: " << num << endl;  

    return 0;  
}
