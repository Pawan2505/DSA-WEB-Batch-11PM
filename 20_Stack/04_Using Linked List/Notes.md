### **C++ Stack Implementation Using Linked List**

In this Notes, we'll implement a **stack** using a **linked list** in C++. A linked list-based stack allows for dynamic memory allocation, meaning we can add or remove elements without worrying about a fixed size.

### **1. Linked List-based Stack Explanation**

In this implementation:

- Each element (node) in the stack is represented by a `Node` object.
- The `Node` class contains:
  - `data`: The actual value stored in the node.
  - `next`: A pointer to the next node in the stack.

The **stack operations** (push, pop, and display) will be implemented using this linked list structure.

---

### **2. Code Breakdown**

#### **Node Class**

```cpp
class Node
{
public:
    int data;    // Stores the value of the stack element
    Node *next;  // Pointer to the next node in the stack

    Node(int data)
    {
        this->data = data;  // Initialize node data
        this->next = NULL;   // Initially, there is no next node
    }
};
```

- **Node Class**: Represents an element in the stack.
  - `data` holds the value.
  - `next` points to the next node (or is `NULL` if it's the last node).

---

#### **Push Operation**

```cpp
void push(Node *&top, int data)
{
    Node *newNode = new Node(data);  // Create a new node

    newNode->next = top;  // Point the new node to the current top
    top = newNode;        // Update top to the new node

    cout << data << " pushed in stack!" << endl;  // Inform the user
}
```

- **Push**: Adds a new node to the stack.
  - A new node is created with the given `data`.
  - The `next` pointer of the new node is set to the current `top`, and then `top` is updated to point to the new node.

---

#### **Pop Operation**

```cpp
int pop(Node *&top)
{
    if (top == NULL)
    {
        cout << "Stack Underflow!" << endl;  // Stack is empty
        return -1;
    }

    Node *temp = top;  // Save the current top node
    top = top->next;   // Update the top to the next node

    cout << temp->data << " popped from stack!" << endl;  // Inform the user

    delete temp;  // Free memory for the popped node
}
```

- **Pop**: Removes the top element from the stack.
  - If the stack is empty (`top == NULL`), it prints "Stack Underflow".
  - Otherwise, it removes the top node and updates the `top` pointer.

---

#### **Display Operation**

```cpp
void display(Node *&top)
{
    if (top == NULL)
    {
        cout << "Stack is Empty!" << endl;  // Stack is empty
        return;
    }

    Node *temp = top;  // Start from the top of the stack

    while (temp != NULL)  // Traverse through the stack
    {
        cout << temp->data << "->";  // Print the current node's data
        temp = temp->next;  // Move to the next node
    }

    cout << "NULL" << endl;  // Mark the end of the stack
}
```

- **Display**: Prints all the elements in the stack from top to bottom.
  - If the stack is empty, it prints "Stack is Empty".
  - Otherwise, it traverses through the stack and prints each node's data.

---

### **3. Main Program**

```cpp
int main()
{
    Node *top = NULL;  // Initially, the stack is empty

    // Push elements to the stack
    push(top, 10);
    push(top, 20);
    push(top, 30);
    push(top, 40);
    push(top, 50);

    // Display the stack
    display(top);

    // Pop the top element from the stack
    pop(top);

    // Display the stack again after popping
    display(top);

    return 0;
}
```

- The `top` pointer is initialized to `NULL`, indicating that the stack is empty at the beginning.
- We push the values `10`, `20`, `30`, `40`, and `50` to the stack, displaying the stack after each operation.
- After that, we pop an element from the stack and display the updated stack.

---

### **4. Sample Output**

```
50 pushed in stack!
40 pushed in stack!
30 pushed in stack!
20 pushed in stack!
10 pushed in stack!
10->20->30->40->50->NULL
50 popped from stack!
10->20->30->40->NULL
```

---

### **5. Note:**

- **Push**: Adds an element to the top of the stack by creating a new node and updating the `top` pointer.
- **Pop**: Removes the top element by adjusting the `top` pointer to the next node and deleting the removed node.
- **Display**: Traverses the linked list from the `top` to display all elements.

---

### **6. Advantages of Linked List-based Stack**

- **Dynamic Size**: The stack does not have a fixed size. It can grow or shrink as needed without the constraints of a fixed-size array.
- **Efficient Memory Usage**: Memory is allocated only when needed, making it more efficient than a fixed-size array-based stack in cases where the number of elements varies.

---
