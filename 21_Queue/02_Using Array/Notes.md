### **Queue Implementation Using Array**
---

### **What is a Queue?**

A **queue** is a **First-In-First-Out (FIFO)** data structure. This means:
- The **first** element that is added to the queue will be the **first** one to be removed.
- Think of it like a line at a store where the first person in line is the first to be served.

### **Queue Operations**

A queue supports the following basic operations:

1. **Enqueue (push)**: Adds an element to the end (rear) of the queue.
2. **Dequeue (pop)**: Removes an element from the front of the queue.
3. **Peek**: Returns the front element of the queue without removing it.
4. **Display**: Prints all the elements currently in the queue.
5. **Empty**: Checks if the queue is empty.
6. **Size**: Checks the number of elements in the queue.

### **Array-Based Queue**

In this implementation, the queue is created using an array, and we manage the front and rear of the queue using indices. Below is the breakdown of the code and concepts.

---

### **Key Components of the Queue Class:**

```cpp
class Queue {
public:
    int* arr;         // Array to store the elements in the queue
    int front;        // Index of the front element
    int back;         // Index of the rear element
    int capacity;     // Maximum capacity of the queue

    Queue(int size);  // Constructor to initialize the queue with a given size
    void push(int data);  // Enqueue operation
    int pop();        // Dequeue operation
    void display();   // Display all elements in the queue
    int peek();       // Peek the front element
    bool empty();     // Check if the queue is empty
};
```

### **Constructor - Initializing the Queue:**

```cpp
Queue(int size) {
    arr = new int[size];  // Dynamically allocate memory for the queue
    front = -1;           // Set front to -1 (empty queue)
    back = -1;            // Set back to -1 (empty queue)
    capacity = size;      // Set the maximum capacity of the queue
}
```

- **`arr`**: A pointer to an array used to store queue elements.
- **`front`**: Points to the first element in the queue.
- **`back`**: Points to the last element in the queue.
- **`capacity`**: The maximum number of elements the queue can hold.

---

### **Enqueue (Push) Operation:**

```cpp
void push(int data) {
    if (back == capacity - 1) {
        cout << "Queue overflow!" << endl;
        return;
    }
    back++;            // Move the back pointer forward
    arr[back] = data;  // Store the data at the back
    cout << data << " enqueued in queue!" << endl;

    if (front == -1) {  // If the queue is empty, update front to 0
        front++;
    }
}
```

- **Overflow Check**: If the queue is full (`back == capacity - 1`), a message is displayed indicating **queue overflow**.
- **Enqueue Process**: Adds an element to the queue by moving the `back` pointer and storing the value.
- **Front Update**: If the queue was empty (i.e., `front == -1`), we set `front = 0`.

---

### **Dequeue (Pop) Operation:**

```cpp
int pop() {
    if (front == -1 || front > back) {
        cout << "Queue underflow!" << endl;
        return -1;  // Return -1 if queue is empty
    }
    int popped_Value = arr[front]; // Store the front value
    front++; // Move front forward to dequeue the element
    cout << popped_Value << " dequeued from queue!" << endl;
    return popped_Value;
}
```

- **Underflow Check**: If the queue is empty (`front == -1 || front > back`), we display a **queue underflow** message.
- **Dequeue Process**: The element at `front` is removed, and `front` is incremented.
- **Returning the Value**: The removed element is returned for use.

---

### **Peek Operation:**

```cpp
int peek() {
    if (front == -1 || front > back) {
        cout << "Element not present in Queue!" << endl;
        return -1;  // Return -1 if queue is empty
    }
    return arr[front];  // Return the front element
}
```

- The **peek** operation allows us to view the front element of the queue without removing it.
- If the queue is empty, it returns -1 and prints an error message.

---

### **Display Operation:**

```cpp
void display() {
    if (front == -1 || front > back) {
        cout << "Queue is empty!" << endl;
        return;
    }
    for (int i = front; i <= back; i++) {
        cout << arr[i] << " ";  // Print all elements in the queue
    }
    cout << endl;
}
```

- **Display Process**: Loops from `front` to `back` and prints all elements.
- If the queue is empty, it prints **Queue is empty**.

---

### **Empty Check Operation:**

```cpp
bool empty() {
    return (front == -1 || front > back);  // Return true if the queue is empty
}
```

- The **empty** method checks if the queue is empty. It returns `true` if `front == -1` or if `front > back`.

---

### **How the Queue Works:**

1. **Push Operation**:
   - Adds elements to the back of the queue.
   - If the queue is full, a **Queue Overflow** message is shown.
   
2. **Pop Operation**:
   - Removes elements from the front of the queue.
   - If the queue is empty, a **Queue Underflow** message is shown.

3. **Peek Operation**:
   - Returns the element at the front of the queue without removing it.

4. **Display Operation**:
   - Displays all elements in the queue from `front` to `back`.

5. **Empty Operation**:
   - Checks if the queue is empty or not.

---

### **Main Program Execution:**

```cpp
int main() {
    Queue q1(5);  // Create a queue with a capacity of 5 elements

    q1.display();  // Display the queue initially (should be empty)

    q1.push(10);  // Enqueue some elements
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    q1.display();  // Display the queue after enqueue operations

    q1.pop();  // Dequeue an element
    q1.display();  // Display after dequeue operation

    cout << "Peek element in queue: " << q1.peek() << endl;  // Peek the front element
    cout << "Queue is empty: " << (q1.empty() ? "Yes" : "No") << endl;  // Check if the queue is empty

    return 0;
}
```

### **Note:**

1. **Queue Operations**: The queue follows a First-In-First-Out (FIFO) structure where elements are added at the **rear** and removed from the **front**.
2. **Array Size Limitation**: The queue has a fixed size (`capacity`), which is determined at the time of creation. Once it’s full, no more elements can be added unless some are removed.
3. **Overflow & Underflow**: These are common conditions that need to be handled:
   - **Overflow** occurs when trying to add an element to a full queue.
   - **Underflow** occurs when trying to remove an element from an empty queue.
4. **Memory Management**: Memory for the queue is dynamically allocated using `new` for flexibility in queue size.

---
