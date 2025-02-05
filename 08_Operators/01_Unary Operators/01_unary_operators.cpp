// Description: Demonstrates pre-increment, post-increment, pre-decrement, and post-decrement.

#include<iostream>
using namespace std;

int main() {
    int a = 10;

    cout << "Original Value: " << a << endl;
    
    a++;  // Post-increment
    cout << "After a++: " << a << endl;

    ++a;  // Pre-increment
    cout << "After ++a: " << a << endl;

    a--;  // Post-decrement
    cout << "After a--: " << a << endl;

    --a;  // Pre-decrement
    cout << "After --a: " << a << endl;

    return 0;
}
