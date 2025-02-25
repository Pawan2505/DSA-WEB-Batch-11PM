## **Lecture Notes: Queue in STL**

### **1. Introduction to Queue**

A **queue** is a **linear data structure** that follows the **FIFO (First In, First Out)** principle. This means that the first element added to the queue will be the first one to be removed.

- **Enqueue**: Add an element to the back of the queue.
- **Dequeue**: Remove the front element from the queue.
- **Front**: Access the front element without removing it.
- **Back**: Access the last element (back) of the queue.
- **Empty**: Check if the queue is empty.
- **Size**: Get the number of elements in the queue.

A **queue** can be thought of as a **line at a ticket counter**. The first person who stands in line is the first one to get the ticket (i.e., gets served).

---

### **2. How to Use Queue in C++**

To use the queue in C++, you need to include the following header:

```cpp
#include <queue>
```

#### **Declaring a Queue**

You can declare a queue with the following syntax:

```cpp
queue<data_type> queue_name;
```

Here:

- `data_type` is the type of elements you want to store in the queue (such as `int`, `string`, `char`).
- `queue_name` is the name of your queue.

#### **Example: Declaring a Queue of Integers**

```cpp
queue<int> numbers;
```

---

### **3. Common Operations on Queue**

Here are the basic operations provided by the **queue** in C++:

#### **`push()`**

- **Purpose**: Adds an element to the back of the queue.
- **Syntax**: `queue_name.push(element);`

```cpp
numbers.push(10);  // Adds 10 to the queue
numbers.push(20);  // Adds 20 to the queue
```

#### **`pop()`**

- **Purpose**: Removes the front element from the queue.
- **Syntax**: `queue_name.pop();`

```cpp
numbers.pop();  // Removes 10 from the front of the queue
```

#### **`front()`**

- **Purpose**: Returns the front element of the queue without removing it.
- **Syntax**: `queue_name.front();`

```cpp
cout << "Front element: " << numbers.front() << endl;  // Prints the front element (20)
```

#### **`back()`**

- **Purpose**: Returns the back (last) element of the queue.
- **Syntax**: `queue_name.back();`

```cpp
cout << "Back element: " << numbers.back() << endl;  // Prints the back element (20)
```

#### **`empty()`**

- **Purpose**: Checks if the queue is empty. Returns `true` if empty, otherwise `false`.
- **Syntax**: `queue_name.empty();`

```cpp
if (numbers.empty()) {
    cout << "Queue is empty!" << endl;
} else {
    cout << "Queue is not empty!" << endl;
}
```

#### **`size()`**

- **Purpose**: Returns the number of elements in the queue.
- **Syntax**: `queue_name.size();`

```cpp
cout << "Size of queue: " << numbers.size() << endl;  // Prints the size of the queue
```

---

### **4. Example of Queue Operations**

Let's look at an example of how we can use a queue in C++:

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> numbers;

    // Push elements into the queue
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    numbers.push(40);

    // Print the front element
    cout << "Front element: " << numbers.front() << endl;  // Output: 10

    // Pop an element from the queue
    numbers.pop();  // Removes 10

    // Print the front element after popping
    cout << "Front element after pop: " << numbers.front() << endl;  // Output: 20

    // Check if the queue is empty
    if (numbers.empty()) {
        cout << "The queue is empty!" << endl;
    } else {
        cout << "The queue is not empty!" << endl;  // Output: The queue is not empty!
    }

    // Print the size of the queue
    cout << "Size of queue: " << numbers.size() << endl;  // Output: 3

    // Pop all elements from the queue
    while (!numbers.empty()) {
        cout << "Dequeuing element: " << numbers.front() << endl;
        numbers.pop();  // Pop the front element
    }

    // Check if the queue is empty again
    if (numbers.empty()) {
        cout << "The queue is empty now!" << endl;  // Output: The queue is empty now!
    }

    return 0;
}
```

**Output:**

```
Front element: 10
Front element after pop: 20
The queue is not empty!
Size of queue: 3
Dequeuing element: 20
Dequeuing element: 30
Dequeuing element: 40
The queue is empty now!
```

---

### **5. Use Cases of Queue**

Queues are used in many real-life scenarios and computational problems. Some common use cases include:

- **Order Processing**: In a restaurant or ticketing system, customers are served in the order they arrive.
- **CPU Scheduling**: In operating systems, processes are executed in the order they arrive, handled by a queue.
- **Breadth-First Search (BFS)**: In graph algorithms, BFS uses a queue to explore nodes level by level.
- **Task Scheduling**: Tasks in a printer queue or a web server are processed in the order they are received.

---

### **6. Advantages of Using Queue**

- **FIFO Principle**: The queue ensures that elements are processed in the exact order they are added.
- **Efficient Operations**: Operations like `push()`, `pop()`, `front()`, `back()`, `size()`, and `empty()` are performed in constant time, i.e., O(1).
- **Memory Efficiency**: Like stacks, queues are implemented dynamically, meaning that memory is allocated as needed.

---

### **7. Note:**

- A **queue** is a data structure that follows the **FIFO (First In, First Out)** principle.
- The queue allows operations like **push**, **pop**, **front**, **back**, **empty**, and **size**.
- **Queues** are useful in scenarios such as order processing, CPU scheduling, task scheduling, and graph traversal algorithms like BFS.

---
