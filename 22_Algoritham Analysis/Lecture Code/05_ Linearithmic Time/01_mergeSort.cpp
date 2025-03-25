#include <iostream>
using namespace std;

void merge(int arr[], int start, int end)
{
    int mid = start + (end - start) / 2;

    int length1 = mid - start + 1;

    int length2 = end - mid;

    int *leftArray = new int[length1];
    int *rightArray = new int[length2];

    int originalArrayIndex = start;

    for (int i = 0; i < length1; i++)
    {
        leftArray[i] = arr[originalArrayIndex++];
    }

    originalArrayIndex = mid + 1;

    for (int i = 0; i < length2; i++)
    {
        rightArray[i] = arr[originalArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;

    originalArrayIndex = start;

    while (index1 < length1 && index2 < length2)
    {

        if (leftArray[index1] < rightArray[index2])
        {
            arr[originalArrayIndex++] = leftArray[index1++];
        }
        else
        {
            arr[originalArrayIndex++] = rightArray[index2++];
        }
    }

    while (index1 < length1)
    {
        arr[originalArrayIndex++] = leftArray[index1++];
    }

    while (index2 < length2)
    {
        arr[originalArrayIndex++] = rightArray[index2++];
    }

    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end);
}

int main()
{
    int n = 10;

    int arr[n] = {12, 34, 567, 56, 2, 8, 2, 56, 7, 45};

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}