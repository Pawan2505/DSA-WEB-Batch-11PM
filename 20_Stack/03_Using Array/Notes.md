### **C++ Stack Implementation Using Array**

In this Notes, we will learn how to implement a **stack** using an **array** in C++. A stack follows the **LIFO (Last In, First Out)** principle, where the last element added is the first to be removed. This implementation involves defining a stack class with fixed capacity (specified at compile time) and using an array to store the elements.

---

### **1. Class Breakdown:**

The `Stack` class contains:
- **An array `arr[]`** to store the elements.
- **An integer `top`** to track the position of the top element.
- **An integer `capacity`** to define the maximum size of the stack.

---

### **2. Code Explanation**

```cpp
#include <iostream>
using namespace std;
```
- `#include<iostream>`: For input and output operations in C++.
- `using namespace std;`: Allows you to use the C++ standard library without the `std::` prefix.

---

### **3. Stack Class Implementation**

```cpp
class Stack
{
private:
    int *arr;      // Pointer to an integer array
    int top;       // Index of the top element in the stack
    int capacity;  // Maximum capacity of the stack

public:
    // Constructor: Initializes stack with given size
    Stack(int size)
    {
        arr = new int[size];  // Dynamically allocate memory for the array
        capacity = size;
        top = -1;  // Initially, the stack is empty
    }

    // Destructor: Frees allocated memory
    ~Stack()
    {
        delete[] arr;  // Release the memory allocated for the stack
    }
```

- **Constructor**: Allocates memory for the stack array and initializes the `top` to `-1` (indicating an empty stack).
- **Destructor**: Frees the memory allocated for the stack when the object is destroyed.

---

### **4. Push Operation**

```cpp
    void push(int x)
    {
        if (top == capacity - 1)
        {
            cout << "Stack Overflow" << endl;  // If the stack is full
            return;
        }
        arr[++top] = x;  // Increment top and add element
    }
```

- **Push**: Adds an element `x` to the stack.
  - If the stack is full (`top == capacity - 1`), it prints "Stack Overflow."
  - Otherwise, it increments `top` and inserts the element at the new top.

---

### **5. Pop Operation**

```cpp
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;  // If the stack is empty
            return -1;  // Return -1 to indicate error
        }
        return arr[top--];  // Return the top element and decrement top
    }
```

- **Pop**: Removes and returns the top element from the stack.
  - If the stack is empty (`top == -1`), it prints "Stack Underflow" and returns `-1`.

---

### **6. Peek Operation**

```cpp
    int peek()
    {
        if (top != -1)
        {
            return arr[top];  // Return the top element
        }
        return -1;  // If the stack is empty, return -1
    }
```

- **Peek**: Returns the top element without removing it.
  - If the stack is empty (`top == -1`), it returns `-1`.

---

### **7. Helper Functions**

```cpp
    bool isEmpty()
    {
        return top == -1;  // True if stack is empty, otherwise false
    }

    bool isFull()
    {
        return top == capacity - 1;  // True if stack is full, otherwise false
    }
};
```

- **isEmpty**: Returns `true` if the stack is empty, otherwise `false`.
- **isFull**: Returns `true` if the stack is full, otherwise `false`.

---

### **8. Main Program**

```cpp
int main()
{
    Stack stack(5);  // Create a stack with a capacity of 5

    stack.push(10);  // Push elements to the stack
    stack.push(20);
    stack.push(30);

    cout << "Top element is: " << stack.peek() << endl;  // Show the top element

    stack.pop();  // Pop an element
    stack.pop();  // Pop another element

    cout << "Top element is: " << stack.peek() << endl;  // Show the new top element

    return 0;
}
```

### **Output Explanation**

```
Top element is: 30
Top element is: 10
```

- Initially, we push the values `10`, `20`, and `30` to the stack.
- The first `peek` call shows `30` because it’s the last element added.
- After popping two elements, the top element becomes `10`, which is shown by the second `peek` call.

---

### **9. Note:**

- **Stack Overflow**: Occurs when you try to push an element into a full stack.
- **Stack Underflow**: Happens when you try to pop from an empty stack.
- **Dynamic Array**: The stack is implemented using a dynamic array (with `new[]` for allocation and `delete[]` for deallocation).

---

### **10. Advantages and Disadvantages of Stack Using Array**

**Advantages**:
- **Efficient**: Operations like push and pop are fast, typically O(1) time complexity.
- **Simple Implementation**: Easy to understand and implement.

**Disadvantages**:
- **Fixed Capacity**: The stack size is fixed at the time of creation. You can't dynamically adjust it once the stack is full, unless you implement resizing.

---
