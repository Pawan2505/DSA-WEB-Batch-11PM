#include<iostream>
using namespace std;

int main(){
    // Declare array size
    int n = 6;
    int arr[n];

    // Take user input to populate the array
    for(int i = 0; i < n; i++){
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];  // User input
    }

    // Display the array elements
    for(int i = 0; i < n; i++){
        cout << "Element present at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}
