### **Queue Implementation Using Linked List**
---

In this implementation, a **queue** is represented using a **linked list**. A linked list is a data structure where each element (node) contains two parts:
- **Data**: Stores the actual data.
- **Next**: Points to the next node in the list.

This approach allows for dynamic memory allocation, meaning that we don't need to predefine the size of the queue, and elements can be added or removed efficiently.

### **Key Concepts of Queue:**
- **First-In-First-Out (FIFO)**: The first element added to the queue will be the first to be removed.
- In a linked list-based queue:
  - **Front** points to the first element.
  - **Back** points to the last element.

### **Queue Operations:**
1. **Enqueue (push)**: Adds an element to the back of the queue.
2. **Dequeue (pop)**: Removes an element from the front of the queue.
3. **Peek**: Views the front element of the queue without removing it.
4. **Empty**: Checks if the queue is empty.
5. **Display**: Prints all elements in the queue from front to back.

---

### **Queue Implementation Using Linked List**

```cpp
#include <iostream>
using namespace std;

// Node class to represent a single node in the linked list
class Node {
public:
    int data;        // Data of the node
    Node* next;      // Pointer to the next node in the list

    // Constructor to initialize a node with data
    Node(int data) {
        this->data = data;
        this->next = NULL;  // Initialize next pointer to NULL
    }
};

// Queue class using linked list
class Queue {
public:
    Node* front;   // Points to the front (first) element of the queue
    Node* back;    // Points to the back (last) element of the queue

    // Constructor to initialize an empty queue
    Queue() {
        front = NULL;  // No elements in the queue initially
        back = NULL;   // No elements in the queue initially
    }

    // Enqueue operation: Adds an element to the back of the queue
    void push(int data) {
        Node* newNode = new Node(data);  // Create a new node

        if (front == NULL) {  // If the queue is empty
            front = newNode;  // Both front and back point to the new node
            back = newNode;
            return;
        }

        back->next = newNode;  // Link the current back node to the new node
        back = newNode;        // Move the back pointer to the new node
    }

    // Dequeue operation: Removes the element from the front of the queue
    void pop() {
        if (front == NULL) {  // If the queue is empty
            cout << "Queue underflow!" << endl;
            return;
        }

        Node* frontDelete = front;  // Store the node to be deleted
        front = front->next;        // Move the front pointer to the next node

        delete frontDelete;  // Delete the old front node
    }

    // Peek operation: Returns the front element without removing it
    int peek() {
        if (front == NULL) {  // If the queue is empty
            cout << "Queue Empty!" << endl;
            return -1;  // Return -1 as an indication of an empty queue
        }
        return front->data;  // Return the data at the front of the queue
    }

    // Empty operation: Checks if the queue is empty
    bool empty() {
        return (front == NULL);  // Return true if the queue is empty
    }

    // Display operation: Prints all elements in the queue from front to back
    void display() {
        if (front == NULL) {  // If the queue is empty
            cout << "Queue is empty!" << endl;
            return;
        }

        Node* temp = front;  // Temporary pointer to traverse the queue
        while (temp != NULL) {  // Traverse the entire queue
            cout << temp->data << " -> ";  // Print each element
            temp = temp->next;  // Move to the next node
        }
        cout << "NULL" << endl;  // Indicate the end of the queue
    }
};

// Main function to demonstrate the queue operations
int main() {
    Queue q1;  // Create a queue object

    // Enqueue some elements into the queue
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    cout << "Queue elements: ";
    q1.display();  // Display the queue

    // Dequeue one element from the front of the queue
    q1.pop();
    cout << "Queue elements after one pop: ";
    q1.display();  // Display the queue after dequeue

    return 0;
}
```

---

### **Explanation of the Code:**

#### **Node Class:**
- **Data**: Holds the actual data of the node.
- **Next**: A pointer that points to the next node in the queue. Initially, it's set to `NULL`, meaning no other nodes follow it.

#### **Queue Class:**
- **Front**: Points to the first element in the queue (the one that will be dequeued next).
- **Back**: Points to the last element in the queue (the one that was last enqueued).
  
#### **Queue Methods:**

1. **Push (Enqueue)**:
   - A new node is created with the given data.
   - If the queue is empty (`front == NULL`), both `front` and `back` point to this new node.
   - If the queue already has elements, the new node is added after the `back` node, and then the `back` pointer is updated.

2. **Pop (Dequeue)**:
   - The element at the front of the queue is removed.
   - If the queue is empty (`front == NULL`), a message is printed indicating **queue underflow**.
   - If the queue is not empty, the `front` pointer is moved to the next node, effectively removing the front node.

3. **Peek**:
   - This method returns the data at the front of the queue without removing the element.
   - If the queue is empty, it returns -1 and prints a message indicating that the queue is empty.

4. **Empty**:
   - Returns `true` if the queue is empty, i.e., `front == NULL`.

5. **Display**:
   - This method traverses the queue from `front` to `back` and prints each element.
   - If the queue is empty, it prints a message saying **Queue is empty**.

---

### **Note:**

- **Linked List Representation**: Unlike array-based queues, a linked list allows dynamic memory allocation. The number of elements can grow or shrink based on the program's needs.
- **FIFO Principle**: The queue follows the FIFO principle, ensuring that elements are processed in the order they were added.
- **Memory Management**: Every new element requires dynamic memory allocation (`new`), and when an element is dequeued, the memory is freed using `delete`.
- **Queue Overflow and Underflow**: These conditions must be handled:
   - **Overflow**: Occurs when trying to add an element to a full queue (not applicable here, as it's a linked list, but conceptually important).
   - **Underflow**: Occurs when trying to remove an element from an empty queue.

---
