#include<iostream>
using namespace std;

// Function definition with parameters
int addition(int num1, int num2) {  // Function takes two integers as parameters
    // Function body (block) will contain logic
    return num1 + num2;  // Returns the sum of the two numbers
}

int main() {
    // Calling the function with arguments 10 and 20
    int result = addition(10, 20);  // Arguments passed to the function
    cout << "Result: " << result << endl;  // Display the result of the function call
    return 0;
}
