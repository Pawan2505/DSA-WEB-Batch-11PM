#include<iostream>
using namespace std;

// Base class with virtual function
class Parent {
    public:
    virtual void display() {
        cout << "Parent Class" << endl;
    }
};

// Derived class overriding base class method
class Child : public Parent {
    public:
    void display() override {
        cout << "Child Class" << endl;
    }
};

int main() {
    Child ch;

    // Calls overridden method in Child class
    ch.display();

    // Calls Parent class method explicitly
    ch.Parent::display();

    return 0;
}
