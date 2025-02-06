#include <iostream>
using namespace std;

// Global variable
int a = 99;

int main() {
    // Local variable
    int a = 10;

    cout << "Local Value: " << a << endl;
    // Accessing global variable using scope resolution (::) operator
    cout << "Global Value: " << ::a << endl;

    return 0;
}
