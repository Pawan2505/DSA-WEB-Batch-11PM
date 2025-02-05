#include<iostream>
using namespace std;

int main(){
    // Declare integer variables to store the user inputs for numbers
    int num1, num2;
    
    // Take user input for the first number
    cout << "Enter Num1: ";
    cin >> num1;

    // Take user input for the second number
    cout << "Enter Num2: ";
    cin >> num2;

    // Declare a variable to store the operator
    char exp;
    
    // Take user input for the operator
    cout << "Enter Operator: ";
    cin >> exp;

    // Switch case to perform different operations based on the input operator
    switch(exp){
        case '+' :  // If operator is '+', perform addition
            cout << "Addition: " << num1 + num2 << endl;
            break;  // Exit the switch block

        case '-' :  // If operator is '-', perform subtraction
            cout << "Subtraction: " << num1 - num2 << endl;
            break;  // Exit the switch block

        case '*' :  // If operator is '*', perform multiplication
            cout << "Multiplication: " << num1 * num2 << endl;
            break;  // Exit the switch block

        case '/' :  // If operator is '/', perform division
            // Check for division by zero
            if(num2 != 0) {
                cout << "Division: " << num1 / num2 << endl;
            } else {
                cout << "Error: Cannot divide by zero!" << endl;
            }
            break;  // Exit the switch block

        case '%' :  // If operator is '%', perform modulus operation
            cout << "Remainder: " << num1 % num2 << endl;
            break;  // Exit the switch block

        default :  // Default case for invalid operator
            cout << "Please enter a correct operator!" << endl;
    }

    return 0;
}
