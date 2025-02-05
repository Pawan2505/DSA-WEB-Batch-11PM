#include<iostream>
using namespace std;

// Function definition with double return type
double addition(double num1, double num2) {
    return num1 + num2;  // Returns the sum as a double
}

int main() {
    // Calling the function and storing the result
    double result = addition(12.4, 9.3);  // Result will be stored as a double
    cout << "Result: " << result << endl;  // Display the result
    return 0;
}
