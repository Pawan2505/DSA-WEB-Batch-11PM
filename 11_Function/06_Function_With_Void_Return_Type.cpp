#include<iostream>
using namespace std;

// Function definition with void return type
void addition(double num1, double num2) {  // Takes two parameters
    cout << "Sum: " << num1 + num2 << endl;  // Output the sum of the two numbers
}

int main() {
    // Function call with arguments 12.4 and 9.3
    addition(12.4, 9.3);  // Passing arguments to the function
    return 0;
}
