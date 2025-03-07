#include <iostream>
using namespace std;

// Define the Node class to represent each element in the linked list
class Node
{
public:
    int data;   // Data stored in the node
    Node *next; // Pointer to the next node in the list

    // Constructor to initialize a new node with given data
    Node(int data)
    {
        this->data = data; // Set the node's data
        this->next = NULL; // Initialize next to NULL, as it's the last node initially
    }
};

// Function to insert a new node at the tail (end) of the linked list
void insertAtTail(Node *&head, int data)
{
    Node *newNode = new Node(data); // Create a new node with the given data

    // If the linked list is empty, set the new node as the head
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // Traverse the list to find the last node
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next; // Move to the next node
    }

    // Attach the new node to the last node's 'next' pointer
    temp->next = newNode;
}

// Function to insert a new node at the head (beginning) of the linked list
void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data); // Create a new node with the given data

    // Point the new node to the current head of the list
    newNode->next = head;

    // Make the new node the new head of the list
    head = newNode;
}

// Function to insert a node at a specific position in the linked list
int insertAtPosition(Node *&head, int position, int data)
{
    Node *newNode = new Node(data); // Create a new node with the given data

    // If position is 1, insert at the head of the list
    if (position == 1)
    {
        newNode->next = head; // Point the new node to the current head
        head = newNode;       // Set the new node as the head
        return 0;             // Successful insertion
    }

    Node *temp = head;

    // Traverse the list to find the node at position-1
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next; // Move to the next node

        // If we reached the end before the desired position, return an error
        if (temp == NULL)
        {
            cout << "Position out of bound!" << endl;
            return -1; // Error: Position out of bounds
        }
    }

    // Insert the new node at the desired position
    newNode->next = temp->next; // Point the new node to the next node
    temp->next = newNode;       // Point the previous node to the new node
    return 0;                   // Successful insertion
}

// Function to display all the nodes in the linked list
void display(Node *&head)
{
    // If the list is empty, print a message and return
    if (head == NULL)
    {
        cout << "LinkedList is Empty!" << endl;
        return;
    }

    Node *temp = head; // Start at the head of the list

    // Traverse the list and print each node's data
    while (temp != NULL)
    {
        cout << temp->data << "->"; // Print the current node's data
        temp = temp->next;          // Move to the next node
    }

    // End of the list, print NULL to show the end of the linked list
    cout << "NULL" << endl;
}

// Main function to test the linked list operations
int main()
{
    Node *head = NULL; // Initialize an empty linked list

    // Insert nodes at the tail of the list
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtTail(head, 60);

    // Display the linked list after inserting nodes at the tail
    display(head);

    // Insert nodes at specific positions
    insertAtPosition(head, 1, 1000); // Insert at the head (position 1)
    insertAtPosition(head, 3, 3000); // Insert at position 3
    display(head);                   // Display the updated list

    // Try to insert at an invalid position
    insertAtPosition(head, 10, 101010); // Position 10 does not exist in this list

    return 0;
}
