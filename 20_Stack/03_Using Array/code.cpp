#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;     // Array to store stack elements
    int capacity; // Maximum capacity of the stack
    int top;      // Index of the top element in the stack

    // Constructor to initialize stack with given size
    Stack(int size)
    {
        arr = new int[size]; // Allocate memory for stack array
        capacity = size;     // Set the capacity of the stack
        top = -1;            // Initialize top as -1 (stack is empty)
    }

    // Destructor to free the dynamically allocated memory
    ~Stack()
    {
        delete[] arr; // Free memory to prevent memory leak
    }

    // Push function to add data to the stack
    int push(int data)
    {
        // Check if the stack is full (Overflow)
        if (top >= capacity - 1)
        {
            cout << "Stack Overflow!" << endl;
            return 0; // Return 0 to indicate overflow
        }

        // Increment the top index and insert the data into the stack
        arr[++top] = data;
        cout << data << " pushed into stack successfully!" << endl;
        return arr[top]; // Return the pushed element
    }

    // Pop function to remove the top element from the stack
    int pop()
    {
        // Check if the stack is empty (Underflow)
        if (top < 0)
        {
            cout << "Stack Underflow!" << endl;
            return -1; // Return -1 to indicate underflow
        }

        // Get the element to be popped and decrement the top index
        int deleteData = arr[top];
        cout << deleteData << " is deleted from stack successfully!" << endl;
        return arr[--top]; // Return the element popped from the stack
    }

    // Function to display the elements of the stack
    void display()
    {
        // If the stack is empty, inform the user
        if (top < 0)
        {
            cout << "Stack is empty!" << endl;
            return;
        }

        // Loop through the stack array and print elements from top to bottom
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " "; // Print each element
        }
        cout << endl; // New line for better readability
    }
};

int main()
{
    Stack mystack(5); // Create a stack of size 5

    // Pushing elements into the stack
    mystack.push(100);
    mystack.push(200);
    mystack.push(300);
    mystack.push(400);
    mystack.push(500);

    // Display the current stack
    mystack.display();

    // Popping one element and displaying the stack again
    mystack.pop();
    mystack.display();

    // Popping another element and displaying the stack again
    mystack.pop();
    mystack.display();

    return 0;
}
