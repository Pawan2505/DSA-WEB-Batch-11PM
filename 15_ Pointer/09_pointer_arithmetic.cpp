#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout << "First element: " << *ptr << endl;

    // Pointer arithmetic: increment the pointer
    ptr++;
    cout << "Second element: " << *ptr << endl;

    // Moving pointer to the 4th element
    ptr += 3;
    cout << "Fourth element: " << *ptr << endl;
}
