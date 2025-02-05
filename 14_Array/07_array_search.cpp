#include<iostream>
using namespace std;

int main(){

    // Initialize array and key
    int n = 8;
    int arr[n] = {10, 20, 30, 40, 50, 60, 70, 60};
    int key = 60;

    // Search for the key in the array
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            cout << "Element present in array at index " << i << "!" << endl;
        }
    }

    return 0;
}
