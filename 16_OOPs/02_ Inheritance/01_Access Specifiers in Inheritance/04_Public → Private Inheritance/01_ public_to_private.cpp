#include <iostream>
using namespace std;

// Base class with a public member
class Vehicle {
public:
    int number = 4; // Public member
};

// Derived class (converts public members into private)
class Car : private Vehicle {};

// Further Derived class (tries to access 'number')
class BMW : public Car {
public:
    void display() {
        cout << "Vehicle has at least " << number << " wheels" << endl; // ❌ ERROR: 'number' is private in Car
    }
};

int main() {
    BMW b1;
    b1.display(); // Compilation error due to private inheritance
    return 0;
}



// Note : Public members of the base class become private in the derived class, restricting access even to further derived classes.