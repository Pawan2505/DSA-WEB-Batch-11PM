#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;
    int arr[n];

    // Input array elements
    for(int i = 0; i < n; i++){
        cout << "Enter element at " << i << " index: ";
        cin >> arr[i];
    }

    int deleteIndex;
    cout << "Enter index number of element to delete: ";
    cin >> deleteIndex;

    // Delete element by shifting elements
    for(int i = deleteIndex; i < n; i++){
        arr[i] = arr[i + 1];
    }

    // Print updated array
    for(int i = 0; i < n - 1; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
