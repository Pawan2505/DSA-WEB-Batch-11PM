#include<iostream>
using namespace std;

int main(){
    // Initialize array with values
    int n = 10;
    int arr[n] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // Display elements and their memory addresses
    for (int i = 0; i < n; i++) {
        cout << "Element at index " << i << ": " << arr[i] << ", Address: " << &arr[i] << endl;
    }

    return 0;
}
