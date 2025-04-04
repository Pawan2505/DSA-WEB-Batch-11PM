#include<iostream>
using namespace std;

int partition(int arr[], int start, int end){

    int pivot = arr[start];
    int count = 0;

    for (int i = start + 1; i <= end; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    int pivotIndex = start + count;

    swap(arr[start], arr[pivotIndex]);

    int i = start;
    int j =end; 

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i], arr[j]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    if(start>= end){
        return;
    }

    int pivotIndex = partition(arr, start, end);
    quickSort(arr, start, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, end);
}

int main(){
    int n = 10;
    int arr[n] = {46, 75, 10, 35, 29, 90, 65, 59, 45, 9};

    cout << "Original Array : ";

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}