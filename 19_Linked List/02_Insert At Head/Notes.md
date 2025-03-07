# **Singly Linked List: Insertion at Head**

## **What is a Singly Linked List?**

A **Singly Linked List** is a linear data structure where each element (called a node) contains:
1. **Data**: The value or information stored in the node.
2. **Next**: A pointer to the next node in the list.

The list starts with a **head** pointer, which points to the first node. If the list is empty, the head is `NULL`.

---

## **Insertion at the Head**

Inserting at the head means adding a new node to the **beginning** of the list. The new node becomes the first node of the list.

### **Steps to Insert at the Head**:
1. **Create a new node**: The new node will contain the data to be inserted.
2. **Point the new node to the current head**: The `next` pointer of the new node should point to the current first node (head).
3. **Update the head**: The head of the list should now point to the new node.

---

### **Code for Insertion at Head**

```cpp
#include <iostream>
using namespace std;

// Node class definition
class Node {
public:
    int data;   // To store data
    Node *next; // Pointer to the next node

    // Constructor to initialize the node with data
    Node(int data) {
        this->data = data;  // Set the data for the node
        this->next = NULL;   // Set next to NULL
    }
};

// Function to insert a node at the head (beginning) of the linked list
void insertAtHead(Node *&head, int data) {
    Node *newNode = new Node(data);  // Create a new node with the given data

    newNode->next = head;  // Point new node to the current head of the list
    head = newNode;        // Update head to the new node
}

// Function to display the linked list
void display(Node *head) {
    // If the list is empty, display a message
    if (head == NULL) {
        cout << "LinkedList is Empty!" << endl;
        return;
    }

    Node *temp = head;  // Temporary pointer to traverse the list

    // Traverse and print each node's data
    while (temp != NULL) {
        cout << temp->data << "->";  // Print the current node's data
        temp = temp->next;           // Move to the next node
    }

    cout << "NULL" << endl;  // End of the list
}

int main() {
    Node *head = NULL;  // Initialize an empty linked list (head is NULL)

    // Insert nodes at the head of the list
    insertAtHead(head, 1000);  // Insert 1000 at the head
    insertAtHead(head, 2000);  // Insert 2000 at the head
    insertAtHead(head, 3000);  // Insert 3000 at the head

    // Display the linked list
    display(head);  // Output: 3000->2000->1000->NULL

    return 0;
}
```

---

## **Explanation of Code**:

1. **Node Class**:
   - **`data`**: Holds the value of the node.
   - **`next`**: Points to the next node in the list (or `NULL` if it's the last node).
   - The **constructor** initializes the node with `data` and sets `next` to `NULL`.

2. **`insertAtHead` Function**:
   - **Create a new node**: A new node is created with the provided data.
   - **Link the new node**: The `next` pointer of the new node is set to the current head of the list (if any).
   - **Update the head**: The head pointer is updated to point to the new node, making it the first node in the list.

3. **`display` Function**:
   - If the list is empty (head is `NULL`), it prints "LinkedList is Empty!".
   - Otherwise, it traverses the list from the head, printing each node's data until the end (`next == NULL`).

4. **`main` Function**:
   - Initializes an empty linked list (`head = NULL`).
   - Inserts nodes at the head using `insertAtHead`.
   - Displays the list using the `display` function.

---

## **Output**:

```text
3000->2000->1000->NULL
```

---

## **Note:**:

1. **Singly Linked List**: It is a list where each node points to the next node. It only allows traversal in one direction, from the head to the tail.
2. **Insertion at the Head**:
   - This operation makes the new node the first node of the list.
   - It involves setting the new node's `next` pointer to the current head and then updating the head to point to the new node.
3. **Displaying the List**: 
   - The list is traversed node by node from the head to the last node, printing each node's data.
4. **Memory Management**: Each new node is created dynamically using `new`.

---

## **Practice Problem**:
- **Task**: Write a function to **delete** the first node (head) of the list. Test the function after inserting some nodes at the head.
  
---
