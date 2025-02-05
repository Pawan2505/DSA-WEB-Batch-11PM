// Description: Demonstrates the use of macros (`#define`) in C++.

#include<iostream>  
using namespace std;  

#define NAME "Pawan Maurya"  // Defining a macro (global constant)
#define X 10  
#define Y 20  

int main() {  
    cout << "Name: " << NAME << endl;  // Outputs "Pawan Maurya"
    
    // Macro for calculation  
    cout << "Sum of X and Y: " << X + Y << endl;  

    return 0;  
}
