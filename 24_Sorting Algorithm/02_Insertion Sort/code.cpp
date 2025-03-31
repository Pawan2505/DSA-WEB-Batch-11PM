#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++) // Start from index 1, as the first element is already considered sorted
    {
        int current = arr[i]; // Element to be inserted in sorted part
        int previous = i - 1;

        // Move elements of arr[0..i-1] that are greater than current to one position ahead
        while (previous >= 0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous]; // Shift element to the right
            previous--;
        }
        arr[previous + 1] = current; // Insert the current element at the correct position
    }
}

int main()
{
    int n = 6;
    int arr[n] = {12, 34, 6, 78, 89, 90}; // Example array

    insertionSort(arr, n);

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
