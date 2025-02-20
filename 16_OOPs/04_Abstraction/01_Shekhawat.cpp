#include<iostream>
using namespace std;

// Abstract Class (acts like an interface)
class Shekhawat {
    public:
    // Pure virtual function - makes this an abstract class
    virtual void speak() = 0;

    // Regular method
    void display() {
        cout << "Base Class.." << endl;
    }
};

// Derived Class Fatima implements the abstract method
class Fatima: public Shekhawat {
    public:
    // Implementing the abstract method
    void speak() override {
        cout << "She speaks continuously..." << endl;
    }
};

int main() {
    // We cannot create an object of the abstract class (Shekhawat)
    // Shekhawat sh; // This will give a compilation error
    
    Fatima ft;

    // Calls the method from the base class (Shekhawat)
    ft.display(); 

    // Calls the overridden method from the derived class (Fatima)
    ft.speak(); 

    return 0;
}
