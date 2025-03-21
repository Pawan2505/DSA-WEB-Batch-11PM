#include <iostream>
using namespace std;

class Stack
{

public:
    int *arr;
    int capacity;
    int top;

    Stack(int size)
    {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    int push(int data)
    {
        if (top >= capacity - 1)
        {
            cout << "Stack Overflow!" << endl;
            return 0;
        }

        arr[++top] = data;
        cout << data << " pushed in stack successfully!" << endl;
        return arr[top];
    }

    int pop()
    {

        if (top < 0)
        {
            cout << "Stack Underflow!" << endl;
            return -1;
        }

        int deleteData = arr[top];
        cout << deleteData << " is deleted from stack successfully!" << endl;
        return arr[--top];
    }

    void display()
    {
        if (top < 0)
        {
            cout << "Stack is empty!" << endl;
            return;
        }

        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack mystack(5);

    mystack.push(100);
    mystack.push(200);
    mystack.push(300);
    mystack.push(400);
    mystack.push(500);

    mystack.display();

    mystack.pop();
    mystack.display();
}