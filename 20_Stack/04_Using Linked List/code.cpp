#include <iostream>
using namespace std;

// Definition of Node class (represents an element in the stack)
class Node
{
public:
    int data;   // Data stored in the node
    Node *next; // Pointer to the next node

    // Constructor to initialize node with data and next pointer as NULL
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Function to push a new element onto the stack
void push(Node *&top, int data)
{
    // Create a new node with the given data
    Node *newNode = new Node(data);

    // Point the new node's next to the current top node
    newNode->next = top;

    // Update the top pointer to the new node
    top = newNode;

    // Print the pushed element
    cout << data << " pushed into stack!" << endl;
}

// Function to pop an element from the stack
int pop(Node *&top)
{
    // Check if the stack is empty
    if (top == NULL)
    {
        cout << "Stack Underflow!" << endl;
        return -1; // Return -1 to indicate underflow (empty stack)
    }

    // Store the current top node temporarily
    Node *temp = top;

    // Move the top pointer to the next node
    top = top->next;

    // Output the popped element
    cout << temp->data << " deleted from stack!" << endl;

    // Free the memory of the deleted node
    delete temp;

    return 0; // Return 0 to indicate successful pop
}

// Function to display the elements in the stack
void display(Node *&top)
{
    // Check if the stack is empty
    if (top == NULL)
    {
        cout << "Stack is Empty!" << endl;
        return;
    }

    // Traverse through the stack and print each element
    Node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Initialize the stack (top pointer is initially NULL)
    Node *top = NULL;

    // Perform stack operations: Push elements
    push(top, 10);
    push(top, 20);
    push(top, 30);
    push(top, 40);

    // Display the stack elements
    display(top);

    // Perform stack operation: Pop an element
    pop(top);

    // Display the updated stack elements
    display(top);

    return 0;
}
