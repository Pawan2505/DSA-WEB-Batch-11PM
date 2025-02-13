#include <iostream>
using namespace std;

// Base class 1
class Person {
public:
    void speak() {
        cout << "Speaking..." << endl;
    }
};

// Base class 2
class Employee {
public:
    void work() {
        cout << "Working..." << endl;
    }
};

// Derived class
class Manager : public Person, public Employee {
public:
    void manage() {
        cout << "Managing..." << endl;
    }
};

int main() {
    Manager m;
    m.speak();  // Inherited from Person
    m.work();   // Inherited from Employee
    m.manage(); // Manager's own method
    return 0;
}


// Note : A class inherits from multiple base classes.

// 👉 Key Takeaway:

// Manager class inherits from both Person and Employee.
// Multiple Inheritance allows a class to inherit from more than one base class.