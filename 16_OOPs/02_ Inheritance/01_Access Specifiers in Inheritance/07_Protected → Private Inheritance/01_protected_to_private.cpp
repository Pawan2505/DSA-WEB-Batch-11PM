#include <iostream>
using namespace std;

// Base class with a protected member
class Vehicle {
protected:
    int number = 4;
};

// Derived class (private inheritance)
class Car : private Vehicle {};

// Further Derived class
class BMW : public Car {
public:
    void display() {
        cout << "Vehicle has at least " << number << " wheels" << endl; // ❌ ERROR: 'number' is private in Car
    }
};

int main() {
    BMW b1;
    b1.display(); // ❌ Compilation error
    return 0;
}


// Note : Protected members of the base class become private in the derived class.
// 👉 Key Takeaway: The number variable is private in Car, so BMW cannot access it.
