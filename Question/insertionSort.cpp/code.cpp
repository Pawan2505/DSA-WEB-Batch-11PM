#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){

    for (int i = 0; i < n; i++){
        int current = arr[i];
        int previous = i - 1;

        while (previous >= 0 && arr[previous] > current){
            arr[previous + 1] = arr[previous];
            previous--;
        }

        arr[previous + 1] = current;
    }
}

int main(){
    int n = 5;
    int arr[n] = {12, 11, 13, 5, 6};

    cout << "Original Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionSort(arr, n);

    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}