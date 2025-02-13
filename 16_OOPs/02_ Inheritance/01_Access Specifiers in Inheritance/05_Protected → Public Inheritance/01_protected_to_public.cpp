#include <iostream>
using namespace std;

// Base class with a protected member
class Vehicle {
protected:
    int number = 4; // Protected member
};

// Derived class (publicly inherited)
class Car : public Vehicle {};

// Further Derived class (inherits Car)
class BMW : public Car {
public:
    void display() {
        cout << "Vehicle has at least " << number << " wheels" << endl;
    }
};

int main() {
    BMW b1;
    b1.display(); // ✅ Works: 'number' is protected but accessible in the derived class
    return 0;
}



//Note : Protected members remain protected and are accessible in derived classes.