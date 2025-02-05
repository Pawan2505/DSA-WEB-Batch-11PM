// Description: Demonstrates block scope and local/global variable precedence.

#include<iostream>
using namespace std;

int main() {
    int num = 10;  // Local variable
    cout << "Num1: " << num << endl;  // Output: 10

    {
        int num = 20;  // Another local variable (inside the block)
        cout << "Num2: " << num << endl;  // Output: 20
    }

    cout << "Num3: " << num << endl;  // Output: 10 (original variable remains unchanged)

    return 0;
}
