#include <iostream>
using namespace std;

// Node class to represent a single node in the linked list
class Node
{
public:
    int data;   // Data of the node
    Node *next; // Pointer to the next node in the list

    // Constructor to initialize a node with data
    Node(int data)
    {
        this->data = data;
        this->next = NULL; // Initialize next pointer to NULL
    }
};

// Queue class using linked list
class Queue
{
public:
    Node *front; // Points to the front (first) element of the queue
    Node *back;  // Points to the back (last) element of the queue

    // Constructor to initialize an empty queue
    Queue()
    {
        front = NULL; // No elements in the queue initially
        back = NULL;  // No elements in the queue initially
    }

    // Enqueue operation: Adds an element to the back of the queue
    void push(int data)
    {
        Node *newNode = new Node(data); // Create a new node

        if (front == NULL)
        {                    // If the queue is empty
            front = newNode; // Both front and back point to the new node
            back = newNode;
            return;
        }

        back->next = newNode; // Link the current back node to the new node
        back = newNode;       // Move the back pointer to the new node
    }

    // Dequeue operation: Removes the element from the front of the queue
    void pop()
    {
        if (front == NULL)
        { // If the queue is empty
            cout << "Queue underflow!" << endl;
            return;
        }

        Node *frontDelete = front; // Store the node to be deleted
        front = front->next;       // Move the front pointer to the next node

        delete frontDelete; // Delete the old front node
    }

    // Peek operation: Returns the front element without removing it
    int peek()
    {
        if (front == NULL)
        { // If the queue is empty
            cout << "Queue Empty!" << endl;
            return -1; // Return -1 as an indication of an empty queue
        }
        return front->data; // Return the data at the front of the queue
    }

    // Empty operation: Checks if the queue is empty
    bool empty()
    {
        return (front == NULL); // Return true if the queue is empty
    }

    // Display operation: Prints all elements in the queue from front to back
    void display()
    {
        if (front == NULL)
        { // If the queue is empty
            cout << "Queue is empty!" << endl;
            return;
        }

        Node *temp = front; // Temporary pointer to traverse the queue
        while (temp != NULL)
        {                                 // Traverse the entire queue
            cout << temp->data << " -> "; // Print each element
            temp = temp->next;            // Move to the next node
        }
        cout << "NULL" << endl; // Indicate the end of the queue
    }
};

// Main function to demonstrate the queue operations
int main()
{
    Queue q1; // Create a queue object

    // Enqueue some elements into the queue
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    cout << "Queue elements: ";
    q1.display(); // Display the queue

    // Dequeue one element from the front of the queue
    q1.pop();
    cout << "Queue elements after one pop: ";
    q1.display(); // Display the queue after dequeue

    return 0;
}
