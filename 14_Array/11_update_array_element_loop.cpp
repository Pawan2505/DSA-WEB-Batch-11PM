#include<iostream>
using namespace std;

int main(){
    
    int arr[5] = {10, 2, 30, 40, 50};

    // Update element at index 1 using loop and break
    for(int i = 0; i < 5; i++){
        if(i == 1){
            arr[i] = 20;
            break;
        }
    }

    // Print updated array
    for(int element : arr){
        cout << element << " ";
    }

    return 0;
}
