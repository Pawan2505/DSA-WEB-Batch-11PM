# **Singly Linked List: Insertion at Tail**

## **What is a Singly Linked List?**

A **singly linked list** is a data structure in which each element (node) stores:
1. **Data**: The value it holds.
2. **Next**: A pointer to the next node in the list.

In a **singly linked list**, we can only traverse the list in one direction: from the head (first node) to the tail (last node).

---

## **Insertion at the Tail**

**Insertion at the tail** refers to adding a new node at the **end** of the linked list. If the list is empty, the new node becomes the head.

---

### **Steps to Insert at Tail**:
1. **Create a new node**: The new node holds the data we want to insert.
2. **Check if the list is empty**: If the head is `NULL`, make the new node the head.
3. **Traverse the list**: If the list is not empty, move through the nodes until you reach the last node (where `next` is `NULL`).
4. **Insert the new node**: Set the `next` pointer of the last node to the new node.

---

### **Code for Insertion at Tail**

```cpp
#include<iostream>
using namespace std;

// Node class definition
class Node {
public:
    int data;   // To store data
    Node *next; // Pointer to the next node

    // Constructor to initialize the node with data
    Node(int data) {
        this->data = data;  // Assign value to data
        this->next = NULL;   // Set next to NULL
    }
};

// Function to insert a node at the tail (end) of the linked list
void insertAtTail(Node* &head, int data) {
    Node *newNode = new Node(data);  // Create a new node with data

    // If the list is empty, the new node becomes the head
    if(head == NULL) {
        head = newNode;
        return;
    }

    // Traverse the list to find the last node
    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    // Attach the new node at the end of the list
    temp->next = newNode;
}

// Function to display the linked list
void display(Node *head) {
    // Check if the list is empty
    if(head == NULL) {
        cout << "LinkedList is Empty!" << endl;
        return;
    }

    // Traverse and print the list
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << "->";  // Print the node's data
        temp = temp->next;  // Move to the next node
    }

    cout << "NULL" << endl;  // End of the list
}

int main() {
    Node *head = NULL;  // Initialize an empty linked list

    // Inserting data at the tail of the list
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);

    // Displaying the linked list
    display(head);

    return 0;
}
```

---

## **Explanation of Code:**

1. **Node Class**:
   - Each **Node** contains:
     - **`data`**: The value the node holds.
     - **`next`**: A pointer that points to the next node in the list.
   - The constructor initializes the **data** and sets **`next`** to `NULL`.

2. **`insertAtTail` Function**:
   - Creates a new node with the given data.
   - If the list is empty, it makes the new node the head.
   - Otherwise, it traverses to the last node and sets the `next` pointer of the last node to point to the new node.

3. **`display` Function**:
   - This function prints out the elements of the linked list.
   - It loops through each node and prints the `data` until it reaches the last node (`next == NULL`).

---

## **Output:**

```
10->20->30->40->NULL
```

---

## **Note:**:
1. **Singly Linked List**: Each node has two parts: `data` and `next`.
2. **Inserting at the Tail**:
   - If the list is empty, the new node becomes the head.
   - If the list is not empty, the function finds the last node and appends the new node.
3. **Displaying the List**: Traverse the list from the head, printing each node’s data until you reach the end.

---

## **Practice Problem**:

- **Task**: Write a function to insert a node at the **beginning** of the list. Then, try inserting nodes both at the tail and the head. Finally, display the list.

---
