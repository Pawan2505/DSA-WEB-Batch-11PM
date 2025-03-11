### **Singly Linked List - Delete Node**

---

#### **1. Introduction to Singly Linked List**

A **Singly Linked List** is a linear data structure where each element (node) contains:
- **Data**: The actual value or information stored in the node.
- **Next**: A pointer/reference to the next node in the list. The last node’s `next` points to `NULL`.

The list has a **head** that points to the first node, and the last node points to `NULL`, marking the end of the list.

---

#### **2. Operations on Singly Linked List**

The key operations on a singly linked list include:
- **Insertion**: Adding nodes to the list.
- **Update**: Modifying the data of a node.
- **Deletion**: Removing a node from the list.

In this lecture, we’ll focus on the **Delete Node** operation.

---

#### **3. Deleting a Node in a Singly Linked List**

The goal of the **deleteNode** function is to remove a node that contains a specific data value from the linked list. 

##### **Steps to Delete a Node:**
1. **Check if the List is Empty**:
   - If the head is `NULL`, the list is empty, and no deletion can occur.

2. **Find the Node to Delete**:
   - Traverse the list to find the node containing the value to be deleted. This requires comparing each node's `data` with the given `deleteData`.

3. **Handle Deletion of Different Cases**:
   - **First Node (Head Node)**: If the node to be deleted is the head, change the head pointer to the next node.
   - **Other Nodes**: If the node to be deleted is not the head, adjust the previous node's `next` pointer to skip over the node being deleted.

4. **Free the Memory**:
   - After removing the node from the list, deallocate the memory used by the node.

---

#### **4. Code Walkthrough: Delete Node**

Here’s the code for deleting a node from a singly linked list:

```cpp
void deleteNode(Node *&head, int deleteData) {
    // Step 1: If the list is empty
    if (head == NULL) {
        cout << "Linked List underflow!" << endl;
        return;
    }

    Node *temp = head;
    Node *prev = NULL;

    // Step 2: Traverse the list to find the node with deleteData
    while (temp != NULL) {
        // If the node to be deleted is found
        if (temp->data == deleteData) {
            // Step 3: If the node to be deleted is the head node
            if (prev == NULL) {
                head = temp->next;  // Make the next node the new head
            }
            else {
                prev->next = temp->next;  // Link previous node to the next node
            }

            delete temp;  // Free the memory of the deleted node
            return;  // Exit after the deletion
        }
        prev = temp;  // Move previous to the current node
        temp = temp->next;  // Move to the next node
    }

    // Step 4: If the node is not found in the list
    cout << "Node with value " << deleteData << " not found!" << endl;
}
```

---

#### **5. How the `deleteNode` Function Works**

1. **Check if the List is Empty**:
   - If the list is empty (`head == NULL`), print `"Linked List underflow!"`.

2. **Traverse the List**:
   - Start from the `head` and iterate through each node.
   - Compare the data in each node with `deleteData`.

3. **Deleting the Node**:
   - If the node with `deleteData` is found:
     - **If it is the head node**, update the `head` to point to the next node (`head = temp->next`).
     - **If it is not the head**, update the previous node’s `next` to point to the node after the current node (`prev->next = temp->next`).

4. **Memory Deallocation**:
   - Use `delete temp;` to free the memory used by the node.

5. **Node Not Found**:
   - If the node is not found after traversing the entire list, print an error message: `"Node with value [deleteData] not found!"`.

---

#### **6. Code Example:**

```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteNode(Node*& head, int deleteData) {
    if (head == NULL) {
        cout << "Linked List underflow!" << endl;
        return;
    }
    
    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL) {
        if (temp->data == deleteData) {
            if (prev == NULL) {
                head = temp->next;
            } else {
                prev->next = temp->next;
            }
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    cout << "Node with value " << deleteData << " not found!" << endl;
}

void display(Node* head) {
    if (head == NULL) {
        cout << "Linked List is Empty!" << endl;
        return;
    }
    
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    
    cout << "Original List: ";
    display(head);

    deleteNode(head, 20);
    cout << "After Deleting 20: ";
    display(head);

    deleteNode(head, 10);
    cout << "After Deleting 10: ";
    display(head);

    deleteNode(head, 100);  // Trying to delete a non-existing node
    cout << "After Attempting to Delete 100: ";
    display(head);

    return 0;
}
```

---

#### **7. Key Considerations in Deleting a Node**
1. **Head Node Deletion**: If the node to be deleted is the head, you must update the `head` pointer to point to the next node.
2. **Memory Management**: Always use `delete` to free the memory allocated to the node that is being deleted.
3. **Edge Cases**: Handle cases where the list is empty or the node is not found.

---


#### **8. Note:**
- Deleting a node in a singly linked list involves searching for the node and modifying the `next` pointer of the previous node.
- Proper memory management is critical, and edge cases like empty lists or non-existent nodes must be handled efficiently.

---
