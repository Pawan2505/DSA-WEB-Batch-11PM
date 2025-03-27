## **C++ Linear Search Program**

### **1. Introduction to Linear Search**
Linear Search is a simple algorithm used to search for a specific element in a list or array. It works by checking each element of the array, one by one, until the desired element is found. If the element is found, the index of that element is returned. If the element is not found after checking all elements, the algorithm will inform the user that the element does not exist in the array.

---

### **2. Code Breakdown**

#### **2.1. `#include<iostream>`**
This line includes the input/output stream library, which is required for handling standard input and output operations (such as printing to the console and reading input from the user). The `cout` (for printing) and `cin` (for reading input) are both part of this library.

#### **2.2. `using namespace std;`**
This line tells the compiler to use the `std` namespace. In C++, the Standard Library functions and objects like `cout`, `cin`, `endl`, and others are defined inside the `std` namespace. By using this line, we don’t need to prefix `std::` before these objects.

---

### **3. The `linearSearch` Function**

```cpp
int linearSearch(int key, int arr[]){
    bool ispresent = false;  // Flag to track if the key is found

    for (int i = 0; i < 10; i++){  // Iterate over the array to search for the key
        if(key == arr[i]){  // Check if the current element matches the key
            cout << key << " present at " << i << " index." << endl;  // Output the index if found
            ispresent = true;  // Set the flag to true if key is found
        }
    }

    if(!ispresent){  // If the key was not found
        cout << "Element does not exist!" << endl;  // Output that the element is not present
    }
}
```

- **Function Parameters**:
  - `key`: The element the user wants to search for in the array.
  - `arr[]`: The array in which the search will be performed.
  
- **Variable Declaration**:
  - `bool ispresent`: A flag that tracks whether the `key` has been found. Initially set to `false`.
  
- **Looping through the array**:
  - The `for` loop starts at index 0 and continues until it reaches the 9th index (since the array has 10 elements).
  - Inside the loop, it checks if the current element (`arr[i]`) matches the `key`. If a match is found:
    - It prints the message: `"key present at index i"`.
    - Sets `ispresent = true` to indicate the element has been found.
    
- **Handling the case when the element is not found**:
  - After the loop ends, if `ispresent` is still `false` (meaning the element was not found in the array), the program prints `"Element does not exist!"`.

---

### **4. The `main` Function**

```cpp
int main(){
    int arr[10] = {12, 34, 56, 78, 34, 23, 12, 345, 66, 2};  // Initialize an array with values
    int searchElement;  // Variable to hold the element to search for

    // Print the array elements to show the user the data
    cout << "Array : ";
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";  // Display each element of the array
    }
    cout << endl;

    // Prompt user to input the element to search for
    cout << "Search Element : ";
    cin >> searchElement;  // Get the search element from the user

    // Call the linearSearch function with the user's input
    linearSearch(searchElement, arr);
}
```

- **Array Initialization**:
  - `int arr[10] = {...}` initializes an array of 10 integers with specific values: `{12, 34, 56, 78, 34, 23, 12, 345, 66, 2}`.
  
- **Printing the Array**:
  - A `for` loop is used to print the elements of the array. It prints each element separated by a space, giving the user a visual representation of the data they are working with.
  
- **User Input**:
  - The program asks the user for the element they want to search for in the array using `cout` and waits for input using `cin`.
  
- **Calling `linearSearch`**:
  - The `linearSearch` function is called with the user's input (`searchElement`) and the array (`arr`) as arguments to perform the search operation.

---

### **5. Key Concepts Explained**

#### **5.1. Array Basics**
An array is a collection of elements of the same type, stored in contiguous memory locations. The elements can be accessed using an index. In this program, an array `arr[10]` stores 10 integer values.

- **Array Access**: Each element in the array is accessed by its index. The index starts from 0 (first element), goes to 1 (second element), and continues up to 9 (tenth element).

#### **5.2. Linear Search**
Linear Search is a simple but inefficient search algorithm. It works by checking each element of the array sequentially.

- **Time Complexity**: O(n) — In the worst case, we have to check every element in the array, where `n` is the number of elements in the array.
  
- **Best Case**: If the key is found at the first index, the time complexity is O(1).
- **Worst Case**: If the key is at the last index or not present at all, the time complexity is O(n).

#### **5.3. Boolean Flag (ispresent)**
The `ispresent` flag is a boolean variable used to track whether the key was found during the search. It helps in handling the case where the element is not found in the array and provides feedback to the user.

---

### **6. Sample Output**
Here’s an example of how the program works:

#### Input:
```
Array : 12 34 56 78 34 23 12 345 66 2
Search Element : 34
```

#### Output:
```
34 present at 1 index.
34 present at 4 index.
```

If the element is not found:
```
Array : 12 34 56 78 34 23 12 345 66 2
Search Element : 100
Element does not exist!
```

---

### **7. Note:**

- **Linear Search** checks each element of the array one by one to find a match.
- The **for loop** is used to iterate through the array.
- The **`ispresent` flag** helps to determine whether the element was found.
- The program prints either the index of the element if found or an error message if not found.
- This approach is **not the most efficient** for large datasets, but it’s simple and easy to understand.

---
