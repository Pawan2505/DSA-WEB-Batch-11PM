#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Initialize a vector of integers
    vector<int> v1;

    // Add elements to the vector using push_back
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    // Print the size of the vector
    cout << "Size of vector : " << v1.size() << endl;

    // Access and print the element at index 0
    cout << "At 0 index : " << v1[0] << endl;

    // Access and print the front element of the vector
    cout << "Front element in vector : " << v1.front() << endl;

    // Access and print the last element of the vector
    cout << "Last element in vector : " << v1.back() << endl;

    // Add more elements to the vector
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);

    // Method 1: Iterate through the vector and print each element
    cout << "Elements in vector: ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    // Method 2: Alternative method using range-based for loop
    // This method is commented out, but it can be used to print elements:
    // for (int item : v1) {
    //     cout << item << " ";
    // }
    // cout << endl;

    // Note: Accessing vector elements with negative indices is not allowed
    // Uncommenting this will cause an error:
    // cout << "Element at negative index: " << v1[-1] << endl; // Not okay

    // Remove the last element using pop_back
    v1.pop_back();

    // Print the elements after removing the last one
    cout << "Elements in vector after pop: ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    // Access and print the element at index 2 using the 'at' method
    cout << "Element at index 2 using 'at()' method: " << v1.at(2) << endl;

    // Clear all elements from the vector
    cout << "Clearing the entire vector..." << endl;
    v1.clear();

    // Check if the vector is empty after clearing
    cout << "Is vector empty? " << (v1.empty() ? "Yes" : "No") << endl;
    cout << "Size of vector after clearing: " << v1.size() << endl;

    // Print elements after clearing the vector (none should be present)
    cout << "Elements after clearing the vector: ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    // Add new elements to the vector again
    v1.push_back(10);
    v1.push_back(100); // This works unless you have specific logic preventing it
    v1.resize(1);      // Resize the vector to only 1 element
    v1.push_back(200);
    v1.push_back(300);
    v1.push_back(400);

    // Print the updated vector after adding new elements
    cout << "Updated elements in vector: ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    // Insert a new element (999) at the 3rd position (index 3)
    v1.insert(v1.begin() + 3, 999);
    cout << "After inserting 999 at index 3: ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    // Erase the element at the 3rd position (index 3)
    v1.erase(v1.begin() + 3);
    cout << "After erasing element at index 3: ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}

// Vector Operations :

    // 1. push_back() : Adds elements to the end of the vector.
    // 2. size() : Returns the number of elements in the vector.
    // 3. front() : Accesses the first element of the vector.
    // 4. back() : Accesses the last element of the vector.
    // 5. pop_back() : Removes the last element from the vector.
    // 6. clear() : Clears all elements from the vector.
    // 7. empty() : Checks if the vector is empty.
    // 8. resize() : Resizes the vector to a specific number of elements.
    // 9. insert() : Inserts an element at a specific position.
    // 10. erase() : Erases an element at a specific position