#include <iostream>
using namespace std;

// Define the Node class which represents an individual node in the linked list
class Node
{
public:
    int data;   // Stores the data of the node
    Node *next; // Pointer to the next node

    // Constructor to initialize a new node with data and set next to NULL
    Node(int data)
    {
        this->data = data; // Set the data for the node
        this->next = NULL; // Initialize next to NULL as it is the last node initially
    }
};

// Function to insert a node at the tail (end) of the linked list
void insertAtTail(Node *&head, int data)
{
    Node *newNode = new Node(data); // Create a new node with the given data

    // If the linked list is empty, make the newNode the head
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

    // Attach the new node to the last node
    temp->next = newNode;
}

// Function to update the node's data when the old data is found
void updateNode(Node *&head, int oldData, int newData)
{
    if (head == NULL)
    {
        cout << "LinkedList is Empty!" << endl;
        return;
    }

    Node *temp = head;

    // Traverse the linked list to find the node with oldData
    while (temp != NULL)
    {
        if (temp->data == oldData)
        {
            temp->data = newData; // Update the data of the found node
            cout << "Node updated: " << oldData << " -> " << newData << endl;
            return;
        }
        temp = temp->next; // Move to the next node
    }

    // If the node with oldData is not found
    cout << "Node with value " << oldData << " not found!" << endl;
}

// Function to delete a node from the linked list
void deleteNode(Node *&head, int deleteData)
{
    if (head == NULL)
    {
        cout << "Linked List underflow!" << endl;
        return;
    }

    Node *temp = head;
    Node *prev = NULL;

    // Traverse the list to find the node to delete
    while (temp != NULL)
    {
        if (temp->data == deleteData)
        {

            // If the node to be deleted is the head node
            if (prev == NULL)
            {
                head = temp->next; // Move the head pointer to the next node
            }
            else
            {
                prev->next = temp->next; // Link the previous node to the next node
            }

            delete temp; // Free memory occupied by the node
            cout << "Node with value " << deleteData << " deleted!" << endl;
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    // If the node to delete is not found
    cout << "Node with value " << deleteData << " not found!" << endl;
}

// Function to display the entire linked list
void display(Node *&head)
{
    if (head == NULL)
    {
        cout << "LinkedList is Empty!" << endl;
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->"; // Print current node's data
        temp = temp->next;          // Move to the next node
    }
    cout << "NULL" << endl; // End of the list
}

int main()
{
    Node *head = NULL; // Initialize an empty linked list

    // Insert nodes at the tail (end) of the list
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtTail(head, 60);

    // Display the linked list after insertions
    cout << "Linked List after insertions:" << endl;
    display(head);

    // Update a node's value
    cout << "\nUpdating node with value 20 to 2000:" << endl;
    updateNode(head, 20, 2000);

    // Display the linked list after update
    cout << "\nLinked List after update:" << endl;
    display(head);

    // Attempting to update a non-existing node
    cout << "\nTrying to update node with value 100:" << endl;
    updateNode(head, 100, 5000);

    // Deleting nodes from the linked list
    cout << "\nDeleting nodes with values 10 and 50:" << endl;
    deleteNode(head, 10);
    deleteNode(head, 50);

    // Display the linked list after deletions
    cout << "\nLinked List after deletions:" << endl;
    display(head);

    return 0;
}
