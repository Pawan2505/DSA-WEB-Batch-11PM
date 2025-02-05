#include<iostream>
using namespace std;

int main(){
    
    int arr[5] = {10, 2, 30, 40, 50};

    // Update element at index 1
    arr[1] = 20;

    // Print updated array
    for(int element : arr){
        cout << element << " ";
    }

    return 0;
}
