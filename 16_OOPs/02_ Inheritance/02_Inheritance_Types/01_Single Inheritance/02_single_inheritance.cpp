#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog d;
    d.eat();  // Inherited from Animal
    d.bark();
    return 0;
}


// Note : A derived class inherits from a single base class.

// 👉 Key Takeaway:

// Dog class inherits eat() method from Animal (Base Class).
// Single Inheritance establishes a Parent-Child relationship.
