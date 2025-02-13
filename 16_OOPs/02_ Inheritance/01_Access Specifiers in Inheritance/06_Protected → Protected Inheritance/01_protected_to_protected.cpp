#include <iostream>
using namespace std;

// Base class with a protected member
class Vehicle {
protected:
    int number = 4;
};

// Derived class (protected inheritance)
class Car : protected Vehicle {};

// Further Derived class
class BMW : public Car {
public:
    void display() {
        cout << "Vehicle has at least " << number << " wheels" << endl;
    }
};

int main() {
    BMW b1;
    b1.display(); // ✅ Works: 'number' is still protected
    return 0;
}




// Note : Protected members remain protected in the derived class.