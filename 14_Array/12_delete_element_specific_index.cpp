#include<iostream>
using namespace std;

int main(){
    
    int arr[5] = {10, 2, 30, 40, 50};

    // Delete element by shifting elements
    for(int i = 0; i < 5; i++){
        arr[i] = arr[i + 1];
    }

    // Print updated array
    for(int i = 0; i < 4; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
