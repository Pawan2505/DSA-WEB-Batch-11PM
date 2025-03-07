#include <iostream>
using namespace std;

// Define the Node class
class Node
{
public:
    int data;   // Variable to store the data of the node
    Node *next; // Pointer to the next node in the linked list

    // Constructor to initialize a new node with data
    Node(int data)
    {
        this->data = data; // Set the data for the node
        this->next = NULL; // Initialize next pointer as NULL (indicating no next node initially)
    }
};

// Function to insert a new node at the head of the linked list
void insertAtHead(Node *&head, int data)
{
    // Create a new node with the provided data
    Node *newNode = new Node(data);

    // Point the new node to the current head of the list
    newNode->next = head;

    // Make the new node the head of the list
    head = newNode;
}

// Function to display the entire linked list
void display(Node *&head)
{
    // If the list is empty, display an appropriate message
    if (head == NULL)
    {
        cout << "LinkedList is Empty!" << endl;
        return;
    }

    // Traverse the list and print each node's data
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->"; // Print the current node's data
        temp = temp->next;          // Move to the next node
    }

    // End of the list, print NULL
    cout << "NULL" << endl;
}

// Main function to demonstrate the insertAtHead functionality
int main()
{
    Node *head = NULL; // Initialize an empty linked list (head is NULL)

    // Insert nodes at the head of the list
    insertAtHead(head, 1000); // Insert 1000 at the head
    insertAtHead(head, 2000); // Insert 2000 at the head
    insertAtHead(head, 3000); // Insert 3000 at the head

    // Display the linked list
    display(head); // Output: 3000->2000->1000->NULL

    return 0;
}
