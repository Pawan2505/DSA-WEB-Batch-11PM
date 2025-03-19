#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    stack<int> myStack;

    void push(int data)
    {
        myStack.push(data);
    }

    int pop()
    {

        if (myStack.size() == 0)
        {
            cout << "Stack is Underflow!" << endl;
            return -1;
        }

        int deletestack = myStack.top();
        myStack.pop();
        cout << deletestack << " deleted from stack!" << endl;
    }

    void display()
    {

        if (myStack.size() == 0)
        {
            cout << "Stack is Empty!" << endl;
        }

        while (myStack.size() > 0)
        {
            cout << myStack.top() << " ";
            myStack.pop();
        }
    }
};

int main()
{
    Stack s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    // s.push(60);
    // s.push(70);

    s.pop();

    s.display();
}