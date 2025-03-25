## **C++ Queue - Using STL**

### **What is a Queue?**
- A **queue** is a **first-in, first-out (FIFO)** data structure. This means:
  - The element that is added first will be the first one to be removed.
  - It is similar to a queue in real life, like a line at a ticket counter or checkout.

### **Key Operations in a Queue:**
1. **`push()`**: Adds an element to the back of the queue.
2. **`pop()`**: Removes the element from the front of the queue.
3. **`front()`**: Returns the element at the front of the queue (but does not remove it).
4. **`back()`**: Returns the element at the rear of the queue (but does not remove it).
5. **`size()`**: Returns the number of elements in the queue.
6. **`empty()`**: Checks if the queue is empty (returns `true` if the queue is empty, otherwise `false`).

### **Queue Operations Code:**

```cpp
#include<iostream>
#include<queue>    // Include the queue header file to use queue
using namespace std; // Use the standard namespace

int main() {
    queue<int> myqueue;  // Declare a queue of integers

    // 1. Adding elements to the queue using push()
    myqueue.push(10);  // Adds 10 to the queue
    myqueue.push(20);  // Adds 20 to the queue
    myqueue.push(30);  // Adds 30 to the queue
    myqueue.push(40);  // Adds 40 to the queue
    myqueue.push(50);  // Adds 50 to the queue
    myqueue.push(60);  // Adds 60 to the queue

    // 2. Accessing front and rear elements
    cout << "Front element in queue: " << myqueue.front() << endl;  // Output the element at the front (10)
    cout << "Rear element in queue: " << myqueue.back() << endl;    // Output the element at the rear (60)

    // 3. Removing an element using pop()
    myqueue.pop();  // Removes the front element (10)

    // 4. Displaying the new front element after popping
    cout << "Front element in queue: " << myqueue.front() << endl;  // Now the front element is 20

    // 5. Checking the size of the queue
    cout << "Size of queue: " << myqueue.size() << endl; // Output the current size (5)

    // 6. Checking if the queue is empty
    cout << "Queue is empty or not: " << (myqueue.empty() ? "Yes" : "No") << endl;

    // 7. Emptying the queue using pop() until it's empty
    while (!myqueue.empty()) {
        cout << myqueue.front() << " ";  // Output the front element
        myqueue.pop();  // Remove the front element
    }
    cout << endl;  // After all elements are removed, print a new line

    // 8. Checking the size of the queue after emptying it
    cout << "Size of queue: " << myqueue.size() << endl; // Should be 0, since the queue is now empty
}
```

---

### **Explanation of Code:**

1. **Queue Declaration:**
   - `queue<int> myqueue;` declares a queue that stores integers.

2. **Adding Elements (push):**
   - `myqueue.push(10);` adds the integer `10` to the queue.
   - The queue now looks like this: **[10]**.
   - Additional `push` operations add more elements to the rear: **[10, 20, 30, 40, 50, 60]**.

3. **Accessing Front and Rear:**
   - `front()` provides access to the first element of the queue.
   - `back()` gives the last element in the queue.
   - These operations do not remove the elements from the queue.

4. **Removing Elements (pop):**
   - `pop()` removes the front element of the queue.
   - After calling `pop()`, the front element `10` is removed, leaving the queue as **[20, 30, 40, 50, 60]**.

5. **Queue Size:**
   - `size()` tells you how many elements are currently in the queue.
   - After adding six elements and removing one, the size is 5.

6. **Empty Check:**
   - `empty()` checks whether the queue is empty.
   - It returns a boolean value: `true` if the queue is empty, and `false` if it's not.

7. **Looping Through the Queue:**
   - The `while` loop checks whether the queue is empty using `empty()`.
   - Inside the loop, `front()` prints the element at the front, and `pop()` removes it.
   - The queue becomes empty after all elements are removed.

---

### **Queue Applications:**

1. **Task Scheduling:**
   - Queues are ideal for scheduling tasks in operating systems, where the first task to be added is the first to be processed.

2. **Breadth-First Search (BFS):**
   - In graph algorithms, BFS uses a queue to explore nodes level by level.

3. **Buffering:**
   - Queues can be used in situations where data needs to be buffered, like in print spooling or network communication.

4. **Real-Time Systems:**
   - In real-time systems, tasks are often queued to be processed in the order they are received.

---

### **Important Points:**

- **First-In, First-Out (FIFO)**: This is the main characteristic of a queue. The first element added is the first one removed.
- **Queue is Dynamic**: In C++, the `queue` container dynamically resizes to accommodate elements.
- **Not Random Access**: You cannot access arbitrary elements in a queue by index, as you would with an array or vector.

---

### **Note:**
- A queue is a fundamental data structure that operates on a FIFO basis.
- It is highly useful in scenarios like task scheduling, buffer management, and graph traversal.
- Understanding how to use and manipulate queues will enhance your ability to design efficient algorithms in C++.

---
