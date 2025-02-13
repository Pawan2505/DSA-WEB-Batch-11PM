#include <iostream>
using namespace std;

// Base class
class Engine {
public:
    void start() {
        cout << "Engine started." << endl;
    }
};

// Intermediate base class 1 (Virtual Inheritance)
class Car : virtual public Engine {};

// Intermediate base class 2 (Virtual Inheritance)
class Boat : virtual public Engine {};

// Derived class (inherits from both Car and Boat)
class AmphibiousVehicle : public Car, public Boat {
public:
    void transform() {
        cout << "Switching modes." << endl;
    }
};

int main() {
    AmphibiousVehicle av;
    av.start();  // Resolves ambiguity using virtual inheritance
    av.transform();
    return 0;
}


// Note : A combination of multiple and hierarchical inheritance using virtual base classes to prevent redundancy.

// 👉 Key Takeaway:

// Using virtual prevents duplication of Engine methods in AmphibiousVehicle.
// Avoids diamond problem caused by multiple inheritance.