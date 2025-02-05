#include<iostream>
using namespace std;

int main(){
    // Declare array size
    int n = 6;
    int arr[n];

    // Take user input to populate the array
    for(int i = 0; i < n; i++){
        cin >> arr[i];  // User input
    }

    // Display array elements
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";  // Display all elements in one line
    }

    return 0;
}
