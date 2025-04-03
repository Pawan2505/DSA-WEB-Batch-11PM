#include<iostream>
using namespace std;

void merge(int arr[], int start, int end){
    int mid = start + (end - start) / 2;
 
    int length1 = mid - start + 1;
    int length2 = end - mid;

    int *firstArray = new int[length1];
    int *secondArray = new int[length2];

    int originalIndex = start;

    for (int i = 0; i < length1; i++){

        firstArray[i] = arr[originalIndex++];
    }

    for (int i = 0; i < length2; i++){
        secondArray[i] = arr[originalIndex++];
    }

    originalIndex = start;

    int index1 = 0;
    int index2 = 0;

    while(index1<length1 && index2<length2){
        if(firstArray[index1]<secondArray[index2]){
            arr[originalIndex++] = firstArray[index1++];
        }else{
            arr[originalIndex++] = secondArray[index2++];
        }
    }

    while(index1<length1){
        arr[originalIndex++] = firstArray[index1++];
    }

    while(index2 < length2){
        arr[originalIndex++] = secondArray[index2++];
    }
}


void mergeSort(int arr[], int start, int end){

    // base condition

    if(start==end){
        return;
    }

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, start, end);
}

int main(){
    int n = 8;
    int arr[n] = {72, 9, 5, 12, 22, 2, 78, 29};

    cout << "Original Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array : ";

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}