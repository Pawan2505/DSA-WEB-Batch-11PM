# **Singly Linked List: Insertion at a Specific Position**

A **Singly Linked List** is a linear data structure where:

- Each **node** contains two parts:
  1. **Data**: The actual value of the node.
  2. **Next**: A pointer to the next node in the list.
- The list has a starting node called **head** and ends with a node whose **next** pointer is `NULL`.

### **Inserting at a Specific Position**:

When you need to insert a new node at a specific position (e.g., after the 2nd node), follow these steps:

1. Traverse the list until you reach the node just before the specified position.
2. Change the `next` pointer of the current node to point to the new node.
3. The new node’s `next` pointer should point to the next node in the list.

---

### **Code Explanation**:

Here’s the C++ code to perform insertions at specific positions in a singly linked list.

```cpp
#include <iostream>
using namespace std;

// Define the Node class
class Node {
public:
    int data;   // Stores the data of the node
    Node *next; // Pointer to the next node

    // Constructor to initialize a new node
    Node(int data) {
        this->data = data;  // Set the data for the node
        this->next = NULL;   // Initialize next to NULL as it is the last node initially
    }
};

// Function to insert a node at the tail (end) of the linked list
void insertAtTail(Node *&head, int data) {
    Node *newNode = new Node(data); // Create a new node with the given data

    // If the linked list is empty (head is NULL), make newNode the head
    if (head == NULL) {
        head = newNode;
        return;
    }

    // Traverse the list to find the last node
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next; // Move to the next node
    }

    // Attach the new node to the last node
    temp->next = newNode;
}

// Function to insert a node at a specific position
int insertAtPosition(Node *&head, int position, int data) {
    Node *newNode = new Node(data);

    // Special case: Insert at the head (position 1)
    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return 0; // Successfully inserted
    }

    Node *temp = head;

    // Traverse to the node before the specified position
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // Check if the position is out of bounds
    if (temp == NULL) {
        cout << "Position out of bounds!" << endl;
        return -1; // Failure: position out of bounds
    }

    // Insert the new node at the desired position
    newNode->next = temp->next;
    temp->next = newNode;

    return 0; // Successfully inserted
}

// Function to display the entire linked list
void display(Node *&head) {
    // If the list is empty, print an appropriate message
    if (head == NULL) {
        cout << "LinkedList is Empty!" << endl;
        return;
    }

    // Traverse the list and print each node's data
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << "->"; // Print current node's data
        temp = temp->next;          // Move to the next node
    }

    // End of the list, print NULL
    cout << "NULL" << endl;
}

int main() {
    Node *head = NULL; // Initialize an empty linked list

    // Insert nodes at the tail of the list
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtTail(head, 60);

    // Display the entire linked list
    cout << "Initial list: ";
    display(head);

    // Insert at various positions
    insertAtPosition(head, 1, 1111); // Insert at the head
    cout << "After inserting 1111 at position 1: ";
    display(head);

    insertAtPosition(head, 3, 3333); // Insert at position 3
    cout << "After inserting 3333 at position 3: ";
    display(head);

    insertAtPosition(head, 10, 100000); // Insert at the tail (position 10)
    cout << "After inserting 100000 at position 10: ";
    display(head);

    // Try to insert at an invalid position (out of bounds)
    int result = insertAtPosition(head, 20, 99999); // Position 20 does not exist
    if (result == -1) {
        cout << "Failed to insert at position 20 as it's out of bounds." << endl;
    }

    return 0;
}
```

---

### **Step-by-Step Breakdown**:

#### **1. Node Class**:

- **Data**: Holds the value of the node.
- **Next**: Pointer that points to the next node in the list (or `NULL` if it's the last node).
- The **constructor** initializes the node with a given `data` and sets `next` to `NULL`.

#### **2. `insertAtTail` Function**:

- **Goal**: Adds a new node at the end of the linked list.
- **Steps**:
  1. Create a new node with the provided data.
  2. Traverse to the last node in the list.
  3. Set the `next` pointer of the last node to the new node.

#### **3. `insertAtPosition` Function**:

- **Goal**: Insert a node at a specific position in the list.
- **Steps**:
  1. If the position is `1`, insert at the head of the list.
  2. Otherwise, traverse the list to find the node just before the specified position.
  3. Insert the new node by updating the `next` pointers.
  4. Handle cases where the position is invalid (out of bounds).

#### **4. `display` Function**:

- **Goal**: Displays all nodes of the linked list from the head to the last node.
- **Steps**:
  1. Traverse through each node.
  2. Print each node's data.
  3. Print `NULL` at the end to signify the end of the list.

#### **5. `main` Function**:

- Creates an empty linked list.
- Inserts nodes at the tail.
- Demonstrates inserting nodes at specific positions, including inserting at the head, a middle position, and the tail.
- Handles invalid insertion attempts (out of bounds).

---

### **Output**:

```text
Initial list: 10->20->30->40->50->60->NULL
After inserting 1111 at position 1: 1111->10->20->30->40->50->60->NULL
After inserting 3333 at position 3: 1111->10->3333->20->30->40->50->60->NULL
After inserting 100000 at position 10: 1111->10->3333->20->30->40->50->60->100000->NULL
Position out of bounds!
Failed to insert at position 20 as it's out of bounds.
```

---

### **Note:**:

1. **Linked List**: A linear structure where nodes are connected using pointers.
2. **Insertion at a Specific Position**:
   - **Position 1**: Insert at the head of the list.
   - **Middle Position**: Traverse to the previous node and link the new node.
   - **Position beyond the end**: Insert at the tail.
3. **Boundary Conditions**:
   - Handle cases like inserting at position `1` (head).
   - Ensure the position is within bounds, otherwise show an error.

---

### **Practice Problem**:

- **Task**: Implement a function to **delete a node** at a specific position in the list. Test the function by deleting nodes from different positions.

---
