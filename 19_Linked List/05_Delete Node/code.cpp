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

void insertAtTail(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteNode(Node *&head, int deleteData)
{
    if (head == NULL)
    {
        cout << "Linked List underflow!" << endl;
        return;
    }

    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL)
    {
        if (temp->data == deleteData)
        {
            if (prev == NULL)
            {
                head = temp->next;
            }
            else
            {
                prev->next = temp->next;
            }
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
    cout << "Node with value " << deleteData << " not found!" << endl;
}

void display(Node *head)
{
    if (head == NULL)
    {
        cout << "Linked List is Empty!" << endl;
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);

    cout << "Original List: ";
    display(head);

    deleteNode(head, 20);
    cout << "After Deleting 20: ";
    display(head);

    deleteNode(head, 10);
    cout << "After Deleting 10: ";
    display(head);

    deleteNode(head, 100); // Trying to delete a non-existing node
    cout << "After Attempting to Delete 100: ";
    display(head);

    return 0;
}
