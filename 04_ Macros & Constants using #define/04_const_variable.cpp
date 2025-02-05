#include<iostream>
using namespace std;

int main(){
    const int num = 10;  // Defining a constant variable 'num' with value 10

    // Trying to modify a constant variable (not allowed)
    // num = 20;  // Not OK: Cannot modify a constant variable

    cout << num << endl;  // Output: 10
}
