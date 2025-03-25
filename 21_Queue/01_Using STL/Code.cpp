#include <iostream> // Include the iostream library for input/output operations
#include <queue>    // Include the queue library for using the queue container

using namespace std; // Use the standard namespace to avoid writing std:: repeatedly

int main()
{
    queue<int> myqueue; // Declare a queue of integers

    // Adding elements to the queue using push()
    myqueue.push(10); // Add 10 to the queue
    myqueue.push(20); // Add 20 to the queue
    myqueue.push(30); // Add 30 to the queue
    myqueue.push(40); // Add 40 to the queue
    myqueue.push(50); // Add 50 to the queue
    myqueue.push(60); // Add 60 to the queue

    // Display the front and rear elements of the queue
    cout << "Front element in queue : " << myqueue.front() << endl; // Display the first element
    cout << "Rear element in queue : " << myqueue.back() << endl;   // Display the last element

    // Removing the front element using pop()
    myqueue.pop(); // Removes the front element (10)

    // Display the new front element after popping
    cout << "Front element in queue : " << myqueue.front() << endl; // Display the updated front element

    // Display the current size of the queue
    cout << "Size of queue : " << myqueue.size() << endl; // Output the number of elements in the queue

    // Check if the queue is empty using empty()
    cout << "Queue is empty or not : " << (myqueue.empty() ? "Yes" : "NO") << endl; // Ternary operator to check if empty

    // Empty the queue by popping elements until it is empty
    while (!myqueue.empty())
    {                                   // While the queue is not empty
        cout << myqueue.front() << " "; // Display the front element
        myqueue.pop();                  // Remove the front element
    }

    cout << endl; // Print a new line after emptying the queue

    // Display the size of the queue after it has been emptied
    cout << "Size of queue : " << myqueue.size() << endl; // Size should now be 0
}
