#include<iostream>
using namespace std;

// Function definition that returns a value
int addition() {
    int num1 = 10;
    int num2 = 20;
    return num1 + num2;  // Returns the sum of num1 and num2
}

int main() {
    // Function call and storing the returned result
    int result = addition();  // The sum is returned and stored in the result variable
    cout << "Result: " << result << endl;  // Output the result
    return 0;
}
