### **Singly Linked List: Update Node**

---

#### **1. Introduction to Singly Linked List**
- A **Singly Linked List** is a linear data structure where each element (node) contains:
  - **Data**: The actual information stored in the node.
  - **Next**: A pointer/reference to the next node in the list.
- The list has a **head** that points to the first node, and the last node points to `NULL`, indicating the end of the list.

---

#### **2. Operations on Singly Linked List**
Singly Linked Lists support several key operations such as insertion, deletion, and updating nodes. In this section, we focus on how to **update** a node in a singly linked list.

---

#### **3. `updateNode` Function**
The purpose of the `updateNode` function is to find a node with a specific value and modify its data. This function allows you to **search** for a node by its data and **replace** its data with new information.

---

##### **Syntax for Update Function**
```cpp
void updateNode(Node*& head, int oldData, int newData);
```

- **Parameters**:
  - `head`: A reference to the head pointer of the list (to allow modification if needed).
  - `oldData`: The data to be replaced.
  - `newData`: The new data that will replace the `oldData`.

---

#### **4. How the Update Operation Works**

1. **Check if the List is Empty**:
   - Before updating any node, check if the linked list is empty (i.e., the `head` is `NULL`). If it is empty, output a message saying the list is empty.

2. **Traverse the List**:
   - Starting from the head, traverse the list node by node until the node with `oldData` is found.
   - During traversal, for each node, check if its data matches the `oldData`.

3. **Update the Data**:
   - If a node with the matching `oldData` is found, replace its `data` with `newData`.

4. **Handle Case Where Node is Not Found**:
   - If the node with `oldData` is not found after traversing the entire list, output a message indicating that the node doesn’t exist.

---

#### **5. Code Example: Update Node**
Here’s a step-by-step implementation of the update operation in a singly linked list:

```cpp
void updateNode(Node*& head, int oldData, int newData) {
    if (head == NULL) {  // Step 1: Check if the list is empty
        cout << "LinkedList is Empty!" << endl;
        return;
    }

    Node* temp = head;

    // Step 2: Traverse the list to find the node with oldData
    while (temp != NULL) {
        if (temp->data == oldData) {  // If node with oldData is found
            temp->data = newData;      // Step 3: Update the node's data
            cout << "Node updated: " << oldData << " -> " << newData << endl;
            return;
        }
        temp = temp->next;  // Move to the next node
    }

    // Step 4: If the node with oldData was not found
    cout << "Node with value " << oldData << " not found!" << endl;
}
```

---

#### **6. Key Points to Remember**
- **Node Traversal**: Always traverse the linked list to find the target node. If the list is large, traversal can be slow (O(n) time complexity).
- **Empty List**: Always handle the case where the linked list might be empty (head is `NULL`).
- **Edge Case**: If the node is not found, ensure to inform the user by printing an appropriate message.
- **Updates in O(1)**: The actual update operation, once the node is found, happens in constant time O(1).

---

#### **7. Example Execution**
Let’s see an example of how the `updateNode` function works:

1. **Initial List**:
   ```
   10 -> 20 -> 30 -> 40 -> NULL
   ```

2. **Update Operation**: Update the node with value `20` to `2000`.
   - After the operation, the list will become:
   ```
   10 -> 2000 -> 30 -> 40 -> NULL
   ```

3. **Non-Existing Node Update**: Try to update the node with value `100`:
   - The function will print: `Node with value 100 not found!`

---



#### **8. Note:**
- The **Update Node** operation is crucial for managing data within a linked list.
- It involves finding a node by its data and modifying its contents.
- Always handle edge cases like an empty list or a node that doesn't exist.
- The process of updating a node requires a linear scan through the list, making it an O(n) operation in terms of time complexity.

---
