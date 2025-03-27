#include <iostream>
using namespace std;

// Function to perform linear search on the array
int linearSearch(int key, int arr[])
{
    bool ispresent = false; // Flag to track if the key is found

    // Iterate over the array to search for the key
    for (int i = 0; i < 10; i++)
    {
        if (key == arr[i])
        {                                                            // Check if the current element matches the key
            cout << key << " present at " << i << " index." << endl; // Output the index if found
            ispresent = true;                                        // Set the flag to true if key is found
        }
    }

    // If the key is not found after checking all elements
    if (!ispresent)
    {
        cout << "Element does not exist!" << endl; // Output that the element is not present
    }
}

// Main function to drive the program
int main()
{
    // Initialize an array with some values
    int arr[10] = {12, 34, 56, 78, 34, 23, 12, 345, 66, 2};
    int searchElement; // Variable to hold the element to search for

    // Print the array elements to show user the data
    cout << "Array : ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " "; // Display each element of the array
    }
    cout << endl;

    // Prompt user to input the element to search for
    cout << "Search Element : ";
    cin >> searchElement; // Get the search element from user

    // Call the linearSearch function with the user's input
    linearSearch(searchElement, arr);
}
