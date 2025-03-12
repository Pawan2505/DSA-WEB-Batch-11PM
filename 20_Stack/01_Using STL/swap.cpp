#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Declare two stacks, myStack1 and myStack2
    stack<int> myStack1, myStack2;

    // Push elements into the first stack (myStack1)
    myStack1.push(10); // Push 10 onto myStack1
    myStack1.push(20); // Push 20 onto myStack1
    myStack1.push(30); // Push 30 onto myStack1
    myStack1.push(40); // Push 40 onto myStack1
    myStack1.push(50); // Push 50 onto myStack1
    myStack1.push(60); // Push 60 onto myStack1
    myStack1.push(70); // Push 70 onto myStack1
    myStack1.push(80); // Push 80 onto myStack1

    // Push elements into the second stack (myStack2)
    myStack2.push(1000); // Push 1000 onto myStack2
    myStack2.push(2000); // Push 2000 onto myStack2
    myStack2.push(3000); // Push 3000 onto myStack2
    myStack2.push(4000); // Push 4000 onto myStack2
    myStack2.push(5000); // Push 5000 onto myStack2
    myStack2.push(6000); // Push 6000 onto myStack2
    myStack2.push(7000); // Push 7000 onto myStack2
    myStack2.push(8000); // Push 8000 onto myStack2

    // Swap the contents of myStack1 and myStack2
    myStack1.swap(myStack2); // After this, myStack1 will contain the elements of myStack2 and vice versa

    // Display elements of the first stack (myStack1) after the swap
    cout << "First Stack display (myStack1 after swap): " << endl;

    // Pop and display each element from myStack1 until it is empty
    while (myStack1.size())
    {
        cout << myStack1.top() << " "; // Print the top element of myStack1
        myStack1.pop();                // Remove the top element from myStack1
    }
    cout << endl;

    // Display elements of the second stack (myStack2) after the swap
    cout << "Second Stack display (myStack2 after swap): " << endl;

    // Pop and display each element from myStack2 until it is empty
    while (myStack2.size())
    {
        cout << myStack2.top() << " "; // Print the top element of myStack2
        myStack2.pop();                // Remove the top element from myStack2
    }
    cout << endl;

    return 0;
}
