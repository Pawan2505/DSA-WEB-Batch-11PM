#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void drive() {
        cout << "Driving..." << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    void honk() {
        cout << "Honking..." << endl;
    }
};

// Further derived class
class SportsCar : public Car {
public:
    void turbo() {
        cout << "Activating Turbo..." << endl;
    }
};

int main() {
    SportsCar sc;
    sc.drive();  // Inherited from Vehicle
    sc.honk();   // Inherited from Car
    sc.turbo();  // SportsCar's own method
    return 0;
}



// Note : A class is derived from another derived class, forming a chain.

// 👉 Key Takeaway:

// Inheritance forms a chain (Vehicle → Car → SportsCar).
// SportsCar inherits drive() from Vehicle and honk() from Car.
