### **C++ Stack Implementation Using a Class**

In this Notes, we will implement a **stack** in C++ using the Standard Library `stack` class. The stack follows the **LIFO** (Last In, First Out) principle, where elements are added and removed from the top.

---

### **1. Stack Class Overview**

Here, we will build a class `Stack` with the following operations:
- **Push**: Add an element to the stack.
- **Pop**: Remove the top element from the stack.
- **Peek**: Show the top element without removing it.
- **Display**: Print all the elements in the stack.
- **isEmpty**: Check if the stack is empty.
- **isFull**: Check if the stack is full (based on the capacity).
- **Size**: Get the number of elements in the stack.

---

### **2. Code Explanation**

```cpp
#include<iostream>
#include<stack>
using namespace std;
```
- `#include<iostream>`: For input/output operations.
- `#include<stack>`: To use the C++ Standard Library `stack`.
- `using namespace std;`: Allows using standard C++ names without `std::` prefix.

---

### **3. Stack Class Definition**

```cpp
class Stack {
    public:
        stack<int> s;   // Internal stack to store elements
        int capacity;   // Maximum size of the stack

    public:
        Stack(int cap) {  // Constructor to set the capacity
            capacity = cap;
        }
```

- **`stack<int> s;`**: This is the internal stack that will hold the elements.
- **`int capacity;`**: A variable to store the maximum size of the stack.

---

### **4. Operations in the Stack Class**

#### **Push Operation**

```cpp
void push(int data) {
    if (s.size() < capacity) {
        s.push(data);  // Add data to the stack
    } else {
        cout << "Stack Overflow!" << endl;  // Stack is full
    }
}
```

- **Purpose**: Adds an element to the top of the stack if there is space.
- If the stack is full, it prints "Stack Overflow!"

---

#### **Pop Operation**

```cpp
void pop() {
    if (s.empty()) {
        cout << "Stack Underflow!" << endl;  // Stack is empty
    } else {
        int topElement = s.top();  // Get the top element
        s.pop();  // Remove the top element
        cout << topElement << " deleted from stack" << endl;
    }
}
```

- **Purpose**: Removes the top element. If the stack is empty, it shows "Stack Underflow!"

---

#### **Peek Operation**

```cpp
void peek() {
    if (s.empty()) {
        cout << "Stack is empty!" << endl;  // Stack is empty
    } else {
        cout << "Top element of stack : " << s.top() << endl;
    }
}
```

- **Purpose**: Shows the top element without removing it. If the stack is empty, it says "Stack is empty."

---

#### **Display Operation**

```cpp
void display() {
    if (s.empty()) {
        cout << "Stack is Empty!" << endl;  // Stack is empty
        return;
    }

    stack<int> temp = s;  // Copy the stack to preserve the original
    while (!temp.empty()) {
        cout << temp.top() << " ";  // Print the top element
        temp.pop();  // Remove it from the temporary stack
    }
    cout << endl;
}
```

- **Purpose**: Prints all elements from top to bottom. Uses a temporary stack to avoid modifying the original stack.

---

#### **isEmpty Operation**

```cpp
bool isEmpty() {
    return s.empty();  // Returns true if stack is empty
}
```

- **Purpose**: Checks if the stack is empty.

---

#### **isFull Operation**

```cpp
bool isFull() {
    return capacity == s.size();  // Returns true if stack is full
}
```

- **Purpose**: Checks if the stack has reached its maximum capacity.

---

#### **Size Operation**

```cpp
int size() {
    return s.size();  // Returns the current number of elements
}
```

- **Purpose**: Returns the number of elements in the stack.

---

### **5. Main Program**

```cpp
int main() {
    Stack mystack(5);  // Create a stack with a capacity of 5

    mystack.push(10);  // Push elements onto the stack
    mystack.push(20);
    mystack.push(30);
    mystack.push(40);
    mystack.push(50);

    cout << "\nStack elements after pushing: " << endl;
    mystack.display();  // Display elements

    cout << "\nTrying to push after fulling the stack: " << endl;
    mystack.push(60);  // Attempt to push into a full stack

    cout << "\nPop operation: " << endl;
    mystack.pop();  // Pop an element from the stack

    cout << "\nStack elements after popping: " << endl;
    mystack.display();  // Display elements after pop

    cout << "Stack is empty: " << (mystack.isEmpty() ? "YES" : "NO") << endl;
    cout << "Stack is full: " << (mystack.isFull() ? "YES" : "NO") << endl;
    cout << "Size of stack: " << mystack.size() << endl;
}
```

---

### **6. Sample Output**

```
Stack elements after pushing: 
50 40 30 20 10

Trying to push after fulling the stack: 
Stack Overflow!

Pop operation: 
50 deleted from stack

Stack elements after popping: 
40 30 20 10

Stack is empty: NO
Stack is full: NO
Size of stack: 4
```

---

### **7. Note:**

- **Push and Pop Operations**: Fundamental stack operations. `push` adds data to the stack, while `pop` removes the top element.
- **Overflow and Underflow**: Overflow occurs when the stack is full, and underflow happens when you try to pop from an empty stack.
- **Capacity and Size**: The stack can be initialized with a specific capacity. The size of the stack tells you how many elements are currently in it.

---
