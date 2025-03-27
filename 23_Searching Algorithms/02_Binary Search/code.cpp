#include <bits/stdc++.h> // Includes most of the standard C++ libraries
using namespace std;

// Function to perform binary search on the sorted array
int binarySearch(int key, int arr[], int n)
{
    // Initialize the start and end pointers
    int start = 0;
    int end = n - 1;

    // Loop until start pointer is less than or equal to the end pointer
    while (start <= end)
    {
        // Calculate mid index to divide the search space in half
        int mid = start + (end - start) / 2;

        // If the key is found at the mid index, return its index
        if (arr[mid] == key)
        {
            return mid;
        }
        // If the key is smaller than the mid element, search the left half
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        // If the key is larger than the mid element, search the right half
        else
        {
            start = mid + 1;
        }
    }

    // Return -1 if the key is not found
    return -1;
}

int main()
{
    // Initialize an array with 10 elements
    int arr[10] = {12, 34, 56, 78, 34, 23, 12, 345, 66, 2};

    // Sort the array in ascending order using the built-in sort function
    sort(arr, arr + 10);

    int searchElement; // Variable to store the element to search for

    // Output the array elements to show the user the data
    cout << "Array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " "; // Print each element of the array
    }
    cout << endl;

    // Ask the user for the element to search for in the array
    cout << "Search Element: ";
    cin >> searchElement; // Input the search element from the user

    // Call the binarySearch function to find the element in the array
    int idx = binarySearch(searchElement, arr, 10);

    // Output the result based on whether the element was found
    if (idx < 0)
    {
        cout << "Element not present in array!" << endl; // If not found, print a message
    }
    else
    {
        cout << searchElement << " present at " << idx << " index." << endl; // If found, print its index
    }

    return 0; // Indicate successful execution
}
