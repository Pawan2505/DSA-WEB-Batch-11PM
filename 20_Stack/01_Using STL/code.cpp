#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Create a stack of integers
    stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10); // Push 10 onto the stack
    myStack.push(20); // Push 20 onto the stack
    myStack.push(30); // Push 30 onto the stack
    myStack.push(40); // Push 40 onto the stack
    myStack.push(50); // Push 50 onto the stack
    myStack.push(60); // Push 60 onto the stack
    myStack.push(70); // Push 70 onto the stack
    myStack.push(80); // Push 80 onto the stack

    // Display the size of the stack
    cout << "Size of Stack : " << myStack.size() << endl;

    // Display the top element in the stack
    cout << "Top element in stack : " << myStack.top() << endl;

    // Optional: Pop an element from the stack (commented out)
    // myStack.pop();

    // Display the updated size and top element after the pop operation (if uncommented)
    cout << "Size of Stack after pop: " << myStack.size() << endl;
    cout << "Top element in stack after pop: " << myStack.top() << endl;

    // Check if the stack is empty and display the result
    cout << "Stack is empty : " << (myStack.empty() ? "YES" : "NO") << endl;

    // Pop all elements from the stack and print them
    cout << "Popping elements from the stack: ";
    while (!myStack.empty()) // Loop until the stack is empty
    {
        cout << myStack.top() << " "; // Display the top element
        myStack.pop();                // Remove the top element from the stack
    }
    cout << endl;

    // Final size of the stack after all elements are popped
    cout << "Size of Stack after all pops : " << myStack.size() << endl;

    return 0;
}
