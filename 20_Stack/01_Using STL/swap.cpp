#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> myStack1, myStack2;

    myStack1.push(10);
    myStack1.push(20);
    myStack1.push(30);
    myStack1.push(40);
    myStack1.push(50);
    myStack1.push(60);
    myStack1.push(70);
    myStack1.push(80);

    myStack2.push(1000);
    myStack2.push(2000);
    myStack2.push(3000);
    myStack2.push(4000);
    myStack2.push(5000);
    myStack2.push(6000);
    myStack2.push(7000);
    myStack2.push(8000);

    myStack1.swap(myStack2);

    cout << "First Stack display : " << endl;

    while (myStack1.size())
    {
        cout << myStack1.top() << " ";
        myStack1.pop();
    }
    cout << endl;

    cout << "Second Stack display : " << endl;

    while (myStack2.size())
    {
        cout << myStack2.top() << " ";
        myStack2.pop();
    }
    cout << endl;
}