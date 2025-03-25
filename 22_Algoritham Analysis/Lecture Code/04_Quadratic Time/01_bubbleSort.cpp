#include <iostream>
using namespace std;

int bubbleSort(int arr[], int n)
{
    // Outer loop
    for (int i = 0; i < n; i++)
    {
        // Inner loop
        for (int j = 0; j < n - i - 1; j++)
        {
            // Swap if elements are in wrong order
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n = 6;
    int arr[n] = {2, 34, 67, 8, 54, 6};

    bubbleSort(arr, n);

    // Output the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
