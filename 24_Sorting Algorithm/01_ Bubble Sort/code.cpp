#include <iostream>  
using namespace std;

// Function to implement bubble sort
int bubbleSort(int arr[], int n)
{
    // Outer loop for n-1 passes
    for (int i = 0; i < n - 1; i++)
    {

        // Inner loop to compare adjacent elements
        for (int j = 0; j < n - i - 1; j++)
        {
            // If current element is greater than the next, swap them
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


int main()
{
    int n = 6; // Array size

    // Initialize the array with unsorted values
    int arr[n] = {5, 6, 2, 10, 7, 4};

    // Print the original unsorted array
    cout << "Original Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << endl; 
    // Call the bubbleSort function to sort the array
    bubbleSort(arr, n);

    // Print the sorted array
    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << endl; 
}
