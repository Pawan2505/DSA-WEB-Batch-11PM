## **Lecture Notes: Stack in STL**

### **1. Introduction to Stack**

A **stack** is a **linear data structure** that follows the **LIFO (Last In, First Out)** principle. This means that the last element added to the stack is the first one to be removed. 

- **Push**: Add an element to the top of the stack.
- **Pop**: Remove the top element from the stack.
- **Top**: Access the top element without removing it.
- **Empty**: Check if the stack is empty.
- **Size**: Get the number of elements in the stack.

A stack can be thought of as a **set of plates** stacked on top of each other. You can only add or remove the plate from the top.

In C++, the **stack** is part of the **STL** (Standard Template Library) and is implemented as a container adaptor. The **stack** container adapter provides a restricted interface to an underlying container (like `deque` or `vector`), which means you can only access the top element and perform operations at the top.

---

### **2. How to Use Stack in C++**

To use the stack in C++, you need to include the following header:
```cpp
#include <stack>
```

#### **Declaring a Stack**

You can declare a stack with the following syntax:
```cpp
stack<data_type> stack_name;
```

Here:
- `data_type` is the type of elements you want to store in the stack (such as `int`, `string`, `char`).
- `stack_name` is the name of your stack.

#### **Example: Declaring a Stack of Integers**

```cpp
stack<int> numbers;
```

---

### **3. Common Operations on Stack**

Here are the basic operations provided by the **stack** in C++:

#### **`push()`**

- **Purpose**: Adds an element to the top of the stack.
- **Syntax**: `stack_name.push(element);`

```cpp
numbers.push(10);  // Adds 10 to the top of the stack
numbers.push(20);  // Adds 20 to the top of the stack
```

#### **`pop()`**

- **Purpose**: Removes the top element from the stack.
- **Syntax**: `stack_name.pop();`

```cpp
numbers.pop();  // Removes the top element (20)
```

#### **`top()`**

- **Purpose**: Returns the top element of the stack without removing it.
- **Syntax**: `stack_name.top();`

```cpp
cout << "Top element: " << numbers.top() << endl;  // Prints the top element (10)
```

#### **`empty()`**

- **Purpose**: Checks if the stack is empty. Returns `true` if empty, otherwise `false`.
- **Syntax**: `stack_name.empty();`

```cpp
if (numbers.empty()) {
    cout << "Stack is empty!" << endl;
} else {
    cout << "Stack is not empty!" << endl;
}
```

#### **`size()`**

- **Purpose**: Returns the number of elements in the stack.
- **Syntax**: `stack_name.size();`

```cpp
cout << "Size of stack: " << numbers.size() << endl;  // Prints the size of the stack
```

---

### **4. Stack Operations**

Let's look at an example of how we can use a stack in C++:

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> numbers;

    // Push elements into the stack
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    numbers.push(40);

    // Print the top element
    cout << "Top element: " << numbers.top() << endl;  // Output: 40

    // Pop an element from the stack
    numbers.pop();  // Removes 40

    // Print the top element after popping
    cout << "Top element after pop: " << numbers.top() << endl;  // Output: 30

    // Check if the stack is empty
    if (numbers.empty()) {
        cout << "The stack is empty!" << endl;
    } else {
        cout << "The stack is not empty!" << endl;  // Output: The stack is not empty!
    }

    // Print the size of the stack
    cout << "Size of stack: " << numbers.size() << endl;  // Output: 3

    // Pop all elements from the stack
    while (!numbers.empty()) {
        cout << "Popping element: " << numbers.top() << endl;
        numbers.pop();  // Pop the top element
    }

    // Check if the stack is empty again
    if (numbers.empty()) {
        cout << "The stack is empty now!" << endl;  // Output: The stack is empty now!
    }

    return 0;
}
```

**Output:**
```
Top element: 40
Top element after pop: 30
The stack is not empty!
Size of stack: 3
Popping element: 30
Popping element: 20
Popping element: 10
The stack is empty now!
```


### **5. Advantages of Using Stack**

- **Simplicity**: The stack provides a simple and easy-to-understand way to manage data.
- **Efficiency**: Operations like `push()`, `pop()`, `top()`, `size()`, and `empty()` are efficient with constant time complexity (`O(1)`).
- **Memory Efficiency**: Since stacks grow dynamically, memory usage is efficient, unlike static arrays.

---


### **6. Note:**

- A **stack** is a data structure that follows the **LIFO (Last In, First Out)** principle.
- The stack allows operations like **push**, **pop**, **top**, **empty**, and **size**.
- **Stacks** are useful in scenarios such as expression evaluation, function calls, and undo operations.

---

### **Practice Questions:**

1. Implement a stack to reverse the order of elements (use a stack to reverse a string).
2. Write a program that demonstrates the use of `push()`, `pop()`, and `top()` methods in stack.

---
