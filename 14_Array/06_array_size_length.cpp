#include<iostream>
using namespace std;

int main(){

    // Initialize array
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    // Calculate the total size of the array
    int size = sizeof(arr);
    cout << size << endl;

    // Calculate the number of elements in the array
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Length: " << length << endl;

    // Display array elements
    for(int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
