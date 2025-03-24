#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void push(Node *&top, int data)
{

    Node *newNode = new Node(data);

    newNode->next = top;
    top = newNode;
    cout << data << " pushed in stack!" << endl;
}

int pop(Node *&top)
{
    if (top == NULL)
    {
        cout << "Stack Underflow!" << endl;
        return -1;
    }

    Node *temp = top;
    top = top->next;
    cout << temp->data << " deteleted from stack!" << endl;
    delete temp;
}

void display(Node *&top)
{
    if (top == NULL)
    {
        cout << "Stack is Empty!" << endl;
        return;
    }

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
    Node *top = NULL;

    push(top, 10);
    push(top, 20);
    push(top, 30);
    push(top, 40);

    display(top);

    pop(top);
    display(top);
}