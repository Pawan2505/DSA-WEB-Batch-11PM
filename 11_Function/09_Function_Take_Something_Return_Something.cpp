#include<iostream>
using namespace std;

// Function definition with parameters and return type (float)
float addition(double num1, double num2) {
    return num1 + num2;  // Returns the sum as a float
}

int main() {
    // Calling the function and storing the result
    float result = addition(12.4, 9.3);  // Result will be a float type
    cout << "Result: " << result << endl;  // Output the result
    return 0;
}
