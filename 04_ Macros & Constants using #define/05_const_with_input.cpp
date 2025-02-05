#include<iostream>
using namespace std;

int main(){
    const int num;  // Defining a constant variable without an initial value

    cout << "Please enter number: " << endl;
    cin >> num;  // Trying to assign value to a constant variable (not allowed)
    
    cout << num << endl;  // Will not compile as constant variables require initialization
}
