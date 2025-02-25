# **Lecture Notes: Vectors in STL**

### **1. Introduction to Vectors**

A **vector** is a dynamic array in C++ that belongs to the **Standard Template Library (STL)**. Unlike arrays, vectors can grow or shrink dynamically, making them more flexible and efficient when dealing with large amounts of data.

- **Dynamic Size**: Vectors can change their size during runtime.
- **Random Access**: Like arrays, elements in vectors can be accessed randomly (using an index).
- **Resizable**: Vectors automatically resize when elements are added or removed.

---

### **2. How to Use Vectors**

To use vectors in C++, you need to include the header file:
```cpp
#include <vector>
```

#### **Declaring a Vector**

A vector can be declared in the following way:

```cpp
vector<data_type> vector_name;
```

Here, `data_type` is the type of data you want to store (such as `int`, `double`, `string`), and `vector_name` is the name you choose for the vector.

#### **Example: Declaring an Integer Vector**
```cpp
vector<int> numbers;
```

---

### **3. Basic Operations on Vectors**

Vectors come with many built-in methods for performing operations like adding elements, accessing elements, removing elements, and more.

#### **Adding Elements to a Vector**

You can add elements to a vector using the `push_back()` method. This method adds elements to the end of the vector.

```cpp
vector<int> numbers;
numbers.push_back(10);   // Adds 10 to the vector
numbers.push_back(20);   // Adds 20 to the vector
numbers.push_back(30);   // Adds 30 to the vector
```

#### **Accessing Elements of a Vector**

Elements in a vector can be accessed using the index (like in arrays). The index starts at 0.

```cpp
cout << numbers[0] << endl;   // Prints the first element (10)
cout << numbers[1] << endl;   // Prints the second element (20)
```

Alternatively, you can use the `.at()` method for safe access (it checks for out-of-bounds errors).

```cpp
cout << numbers.at(2) << endl;  // Prints the third element (30)
```

#### **Size of a Vector**

You can get the number of elements in a vector using the `.size()` method.

```cpp
cout << "Size of the vector: " << numbers.size() << endl;
```

---

### **4. Commonly Used Methods in Vectors**

Here are some important methods you will often use with vectors:

#### **`push_back()`**

- **Purpose**: Adds an element to the end of the vector.
- **Syntax**: `vector_name.push_back(element);`

```cpp
vector<int> v;
v.push_back(5);  // Adds 5 to the vector
```

#### **`pop_back()`**

- **Purpose**: Removes the last element of the vector.
- **Syntax**: `vector_name.pop_back();`

```cpp
v.pop_back();  // Removes the last element (5)
```

#### **`size()`**

- **Purpose**: Returns the number of elements in the vector.
- **Syntax**: `vector_name.size();`

```cpp
cout << "Size: " << v.size() << endl;  // Prints the size of the vector
```

#### **`empty()`**

- **Purpose**: Checks whether the vector is empty (returns `true` if empty, `false` otherwise).
- **Syntax**: `vector_name.empty();`

```cpp
if (v.empty()) {
    cout << "The vector is empty!" << endl;
} else {
    cout << "The vector is not empty!" << endl;
}
```

#### **`clear()`**

- **Purpose**: Removes all elements from the vector, making its size zero.
- **Syntax**: `vector_name.clear();`

```cpp
v.clear();  // Removes all elements from the vector
```

#### **`resize()`**

- **Purpose**: Resizes the vector. If the new size is smaller, excess elements are removed. If the new size is larger, new elements are added (initialized to zero or the given value).
- **Syntax**: `vector_name.resize(new_size);`
  
```cpp
v.resize(5);  // Resizes the vector to 5 elements
v.resize(3, 100);  // Resizes to 3 elements, new elements initialized to 100
```

#### **`front()` and `back()`**

- **Purpose**: Returns the first and last elements of the vector, respectively.
- **Syntax**: `vector_name.front();` and `vector_name.back();`

```cpp
cout << "First element: " << v.front() << endl;  // Prints the first element
cout << "Last element: " << v.back() << endl;    // Prints the last element
```

#### **`insert()`**

- **Purpose**: Inserts elements at a specific position in the vector.
- **Syntax**: `vector_name.insert(position, value);`

```cpp
vector<int> v = {1, 2, 3};
v.insert(v.begin() + 1, 99);  // Inserts 99 at the second position
```

#### **`erase()`**

- **Purpose**: Removes one or more elements from the vector.
- **Syntax**: `vector_name.erase(position);` or `vector_name.erase(start_position, end_position);`

```cpp
v.erase(v.begin() + 1);  // Removes the second element
```

---

### **5. Iterating Over a Vector**

You can use a **for loop** to iterate through the elements of a vector.

#### **Using a Basic `for` Loop**
```cpp
for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";   // Accessing elements by index
}
```

#### **Using a Range-based `for` Loop** (C++11 and later)
```cpp
for (int num : v) {
    cout << num << " ";  // Accessing each element directly
}
```

---

### **6. Example: Working with Vectors**

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create an empty vector
    vector<int> numbers;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Print size and elements
    cout << "Size: " << numbers.size() << endl;
    cout << "Elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Remove the last element
    numbers.pop_back();

    // Check if the vector is empty
    if (numbers.empty()) {
        cout << "Vector is empty!" << endl;
    } else {
        cout << "Vector is not empty!" << endl;
    }

    // Resize the vector
    numbers.resize(5, 100);  // Resize to 5, new elements initialized to 100

    // Print resized vector
    cout << "Resized Vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

**Output:**
```
Size: 3
Elements: 10 20 30
Vector is not empty!
Resized Vector: 10 20 30 100 100
```

---

### **7. Benefits of Using Vectors**

- **Dynamic Size**: Unlike arrays, vectors can grow or shrink in size.
- **Random Access**: You can access elements using an index, just like an array.
- **Easy to Use**: Vectors provide many convenient functions for managing elements.
- **Efficient Memory Management**: Vectors automatically handle memory allocation and deallocation.

---

### **8. Note:**

- **Vectors** are dynamic arrays that automatically resize when needed.
- They provide many methods to manipulate and access elements (e.g., `push_back()`, `pop_back()`, `resize()`, `insert()`, `erase()`).
- Vectors are **efficient**, **easy to use**, and allow for dynamic memory management.
- The **Standard Template Library (STL)** makes it easy to work with vectors in C++.

---

### **Practice Questions:**

1. Write a program that adds 5 elements to a vector, then removes the last element and prints the vector.
2. Create a vector of `double` type and find the sum of all its elements using a loop.
3. Write a program that demonstrates the use of the `insert()` and `erase()` methods on vectors.

---

