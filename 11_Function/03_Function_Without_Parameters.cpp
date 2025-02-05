#include<iostream>
using namespace std;

// Function definition without parameters
int addition() {
    int num1 = 10;  // Local variable
    int num2 = 20;  // Local variable
    cout << "Num1: " << num1 << endl;  // Output the first number
    cout << "Num2: " << num2 << endl;  // Output the second number
    return num1 + num2;  // Return the sum
}

int main() {
    // Function call without arguments
    int result = addition();  // Function is called without passing any parameters
    cout << "Result: " << result << endl;  // Output the result
    return 0;
}
