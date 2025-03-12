#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    myStack.push(60);
    myStack.push(70);
    myStack.push(80);

    cout << "Size of Stack : " << myStack.size() << endl;
    cout << "Top element in stack : " << myStack.top() << endl;

    // myStack.pop();

    cout << "Size of Stack : " << myStack.size() << endl;
    cout << "Top element in stack : " << myStack.top() << endl;

    cout << "Stack is empty : " << (myStack.empty() ? "YES" : "NO") << endl;

    while (myStack.size())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;
    cout << "Size of Stack : " << myStack.size() << endl;
}

