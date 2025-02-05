#include<iostream>
using namespace std;

// Function definition without return type (void)
void addition() {
    int num1 = 10;
    int num2 = 20;
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;
}

int main() {
    // Function call without returning anything
    addition();  // Just calls the function to display the values
    return 0;
}
