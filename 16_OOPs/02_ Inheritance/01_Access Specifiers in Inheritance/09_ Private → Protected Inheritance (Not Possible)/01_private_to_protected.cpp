#include <iostream>
using namespace std;

// Base class with a private member
class Vehicle {
private:
    int number = 4; // Private member
};

// Derived class (inherits as protected)
class Car : protected Vehicle {
public:
    void display() {
        cout << "Vehicle has at least " << number << " wheels" << endl; // ❌ ERROR: 'number' is private in Vehicle
    }
};

int main() {
    Car c1;
    c1.display(); // ❌ Compilation Error: 'number' is private in Vehicle
    return 0;
}


// Note : Private members of the base class remain inaccessible even in protected inheritance.

// 👉 Key Takeaway:

// Even with protected inheritance, private members are not accessible in the derived class.
