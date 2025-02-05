#include<iostream>
using namespace std;

// Function definition with a float return type
float addition(double num1, double num2) {
    return num1 + num2;  // Returns the sum as a float
}

int main() {
    // Calling the function and storing the returned value
    float result = addition(12.4, 9.3);  // Storing the sum in result
    cout << "Result: " << result << endl;  // Output the result
    return 0;
}
