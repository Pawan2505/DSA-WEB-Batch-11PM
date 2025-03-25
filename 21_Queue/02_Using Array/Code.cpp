#include <iostream>
using namespace std;

// Queue class definition
class Queue
{
public:
    int *arr;     // Array to store elements of the queue
    int front;    // Points to the front element of the queue
    int back;     // Points to the last element in the queue
    int capacity; // Maximum capacity of the queue

    // Constructor to initialize the queue with a given size
    Queue(int size)
    {
        arr = new int[size]; // Dynamically allocate memory for the queue array
        front = -1;          // Initialize front to -1, indicating empty queue
        back = -1;           // Initialize back to -1, indicating empty queue
        capacity = size;     // Set the capacity of the queue
    }

    // Enqueue operation: Add an element to the queue
    void push(int data)
    {
        // Check for overflow condition (queue is full)
        if (back == capacity - 1)
        {
            cout << "Queue overflow!" << endl;
            return;
        }

        // Increment back and add the new element to the queue
        back++;
        arr[back] = data;
        cout << data << " enqueued in queue!" << endl;

        // If the queue is empty (front is -1), set front to 0
        if (front == -1)
        {
            front++;
        }
    }

    // Dequeue operation: Remove an element from the front of the queue
    int pop()
    {
        // Check for underflow condition (queue is empty)
        if (front == -1 || front > back)
        {
            cout << "Queue underflow!" << endl;
            return -1; // Return -1 to indicate the queue is empty
        }

        // Store the front element and increment front
        int popped_Value = arr[front];
        front++;

        cout << popped_Value << " dequeued from queue!" << endl;
        return popped_Value;
    }

    // Display operation: Show the current elements in the queue
    void display()
    {
        // Check if the queue is empty
        if (front == -1 || front > back)
        {
            cout << "Queue is empty!" << endl;
            return;
        }

        // Print elements from front to back
        for (int i = front; i <= back; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    // Peek operation: Get the front element of the queue without removing it
    int peek()
    {
        // Check if the queue is empty
        if (front == -1 || front > back)
        {
            cout << "Element not present in Queue!" << endl;
            return -1; // Return -1 to indicate no element in the queue
        }

        return arr[front]; // Return the front element of the queue
    }

    // Empty operation: Check if the queue is empty
    bool empty()
    {
        return (front == -1 || front > back); // Returns true if queue is empty
    }
};

int main()
{
    Queue q1(5); // Create a queue with a capacity of 5 elements

    // Display initial empty queue
    q1.display();

    cout << "Enqueue Operation: " << endl;

    // Enqueue some elements
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    // Display the queue after enqueuing elements
    q1.display();

    cout << "Dequeue Operation: " << endl;

    // Dequeue an element
    q1.pop();

    cout << "Display Operation: " << endl;

    // Display the queue after one dequeue
    q1.display();

    // Peek the front element of the queue
    cout << "Peek element in queue: " << q1.peek() << endl;

    // Check if the queue is empty
    cout << "Queue is empty: " << (q1.empty() ? "Yes" : "No") << endl;

    return 0;
}
