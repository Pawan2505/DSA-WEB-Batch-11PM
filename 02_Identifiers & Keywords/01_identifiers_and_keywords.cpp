// Description: Demonstrates valid and invalid variable names in C++.

#include<iostream>  
using namespace std;  

int main() {  
    // int 12num = 10;  // ❌ Not Ok (Cannot start with a number)
    int num12 = 10;     // ✅ Ok  
    // int num value = 10;  // ❌ Not Ok (Space not allowed)  
    int num_value = 10;  // ✅ Ok  
    int _value = 10;     // ✅ Ok  
    // int @value = 10;  // ❌ Not Ok (Special character @ not allowed)  
    // int float = 10;   // ❌ Not Ok (Cannot use a keyword as variable name)  

    cout << num12 << endl;
    cout << num_value << endl;
    cout << _value << endl;

    return 0;
}
