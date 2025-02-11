#include<iostream>
using namespace std;

class Teacher {
public:
    int *ptr;  // Pointer to dynamically allocated memory

    // Default Constructor
    Teacher() {
        cout << "Constructor Called..." << endl;
        ptr = nullptr;  // Initialize pointer to null
    }

    // Parameterized Constructor
    Teacher(int x) {
        ptr = new int;  // Allocate memory
        *ptr = x;  // Store value in allocated memory
    }

    // Destructor to release memory
    ~Teacher() {
        delete ptr;  // Free allocated memory
        cout << "Destructor Called, Memory Released..." << endl;
    }

    // Function to display value
    void getDetails() {
        cout << "Value: " << *ptr << endl;
    }
};

int main() {
    Teacher t1;  // Calls default constructor
    Teacher t2(10);  // Calls parameterized constructor

    t2.getDetails();  // Display stored value
} 
