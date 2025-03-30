#include <iostream>
using namespace std;

int bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++){

        for (int j = 0; j < n - i - 1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n = 6;

    int arr[n] = {5, 6, 2, 10, 7, 4};

    cout << "Original Array : ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, n);

    cout << "Sorted Array : ";

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}