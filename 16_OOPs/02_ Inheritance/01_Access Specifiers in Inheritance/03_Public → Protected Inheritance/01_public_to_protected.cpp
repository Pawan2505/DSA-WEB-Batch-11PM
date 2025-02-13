#include <iostream>
using namespace std;

// Base class with a public member
class Vehicle {
public:
    int number = 4; // Public member
};

// Derived class (converts public members into protected)
class Car : protected Vehicle {
public:
    void display() {
        cout << "Vehicle has at least " << number << " wheels" << endl;
    }
};

int main() {
    Car c1;
    c1.display(); // Works, as 'number' is protected inside Car
    // cout << c1.number;  // ❌ ERROR: 'number' is now protected
    return 0;
}



// Note : Public members of the base class become protected in the derived class (accessible only inside the class hierarchy, not outside).