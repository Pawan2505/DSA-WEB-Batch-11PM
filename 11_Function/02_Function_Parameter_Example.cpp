#include<iostream>
using namespace std;

// Function definition with parameters
int addition(int num1, int num2) {
    cout << "Num1: " << num1 << endl;  // Output the first number
    cout << "Num2: " << num2 << endl;  // Output the second number
    return num1 + num2;  // Return the sum of the numbers
}

int main() {
    // Calling the function with arguments 10 and 20
    int result = addition(10, 20);  // Arguments passed to the function
    cout << "Result: " << result << endl;  // Output the result
    return 0;
}
