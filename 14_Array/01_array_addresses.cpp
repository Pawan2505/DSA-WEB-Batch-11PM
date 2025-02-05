#include<iostream>
using namespace std;

int main(){
    // Declare an array of size 10
    int n = 10;
    int arr[n];

    // Assign values to the array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    arr[5] = 60;
    arr[6] = 70;
    arr[7] = 80;
    arr[8] = 90;
    arr[9] = 100;

    // Display each element and its memory address
    for (int i = 0; i < n; i++) {
        cout << "Element at index " << i << ": " << arr[i] << ", Address: " << &arr[i] << endl;
    }

    return 0;
}
