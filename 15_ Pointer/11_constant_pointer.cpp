#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    // Constant Pointer: Pointer cannot be reassigned
    const int *ptr1 = &a;
    cout << "ptr1 points to: " << *ptr1 << endl;
    // ptr1 = &b;  // Error: cannot change the address

    // Pointer to Constant: Value cannot be modified
    const int *ptr2 = &a;
    cout << "ptr2 points to: " << *ptr2 << endl;
    // *ptr2 = 50;  // Error: cannot modify value

    ptr2 = &b;  // Allowed: can point to a new address
    cout << "ptr2 now points to: " << *ptr2 << endl;
}
