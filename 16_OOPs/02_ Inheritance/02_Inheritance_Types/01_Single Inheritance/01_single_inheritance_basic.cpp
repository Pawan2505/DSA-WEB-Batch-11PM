#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void display() {
        cout << "Vehicle has at least 2 wheels" << endl;
    }
};

// Derived class inheriting from Vehicle
class Car : public Vehicle {};

int main() {
    Car c1;
    c1.display();  // Inherited method
    return 0;
}
