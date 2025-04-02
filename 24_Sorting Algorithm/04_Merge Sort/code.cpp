#include <iostream>
using namespace std;

// Function to merge two sorted subarrays
void merge(int arr[], int start, int end)
{
    int mid = start + (end - start) / 2;
    int length1 = mid - start + 1;
    int length2 = end - mid;

    // Create temporary arrays
    int *firstArray = new int[length1];
    int *secondArray = new int[length2];

    // Copy data to temporary arrays
    for (int i = 0; i < length1; i++)
    {
        firstArray[i] = arr[start + i];
    }

    for (int i = 0; i < length2; i++)
    {
        secondArray[i] = arr[mid + 1 + i];
    }

    // Merge the temporary arrays back into original array
    int index1 = 0, index2 = 0, originalIndex = start;
    while (index1 < length1 && index2 < length2)
    {
        if (firstArray[index1] < secondArray[index2])
        {
            arr[originalIndex++] = firstArray[index1++];
        }
        else
        {
            arr[originalIndex++] = secondArray[index2++];
        }
    }

    // Copy any remaining elements of firstArray
    while (index1 < length1)
    {
        arr[originalIndex++] = firstArray[index1++];
    }

    // Copy any remaining elements of secondArray
    while (index2 < length2)
    {
        arr[originalIndex++] = secondArray[index2++];
    }
    // Free dynamically allocated memory
    delete[] firstArray;
    delete[] secondArray;
}

// Function to implement Merge Sort
void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    // Recursively sort first and second halves
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    // Merge the sorted halves
    merge(arr, start, end);
}

int main()
{
    int arr[] = {12, 3, 56, 23, 544, 7, 89, 45, 7, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sorting the array using Merge Sort
    mergeSort(arr, 0, n - 1);

    // Printing the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
