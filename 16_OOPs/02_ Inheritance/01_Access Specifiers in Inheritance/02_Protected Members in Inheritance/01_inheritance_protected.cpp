#include <iostream>
using namespace std;

// Base class with a protected member
class Vehicle {
protected:
    int number = 4; // Accessible in derived class but not outside
};

// Derived class
class Car : public Vehicle {
public:
    void display() {
        cout << "Vehicle has at least " << number << " wheels" << endl;
    }
};

int main() {
    Car c1;
    c1.display(); // Accessible through derived class method
    return 0;
}
