#include<iostream>
using namespace std;

int main() {
    int *ptr;

    // Dynamically allocating memory for 5 integers
    ptr = new int[5];

    // Assigning values
    for(int i = 0; i < 5; i++) {
        ptr[i] = (i + 1) * 10;
    }

    // Displaying values
    for(int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;

    // Freeing the dynamically allocated memory
    delete[] ptr;
}
