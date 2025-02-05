#include<iostream>
using namespace std;

int main(){
    int arr[11] = {12, 34, 5, 67, 8, 9, 1223, 56, 78, 2, 0};  // An extra space for new element
    int n = 10;  // Current size of the array
    int element = 100;  // Element to be inserted
    int insertIndex = 5;  // Index where the element is to be inserted

    // Shift elements to the right to make space for new element
    for(int i = n; i > insertIndex; i--){
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[insertIndex] = element;

    // Print updated array
    cout << "After inserting element: ";
    for(int i = 0; i <= n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
