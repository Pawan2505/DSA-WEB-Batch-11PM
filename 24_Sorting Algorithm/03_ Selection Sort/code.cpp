#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for (int i = 0; i < n; i++){
        int smallest = i;

        for (int j = i + 1; j < n; j++){
            if(arr[j]< arr[smallest]){
                smallest = j;
            }
        }

        swap(arr[i], arr[smallest]);
    }
}
int main(){
    int n = 5;
    int arr[n] = {64, 25, 12, 22, 11};
    selectionSort(arr, n);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}