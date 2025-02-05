#include<iostream>
using namespace std;

int printArray(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n = 6;
    int arr[n] = {11, 222, 45, 67, 89, 54};
    printArray(arr, n);
}
