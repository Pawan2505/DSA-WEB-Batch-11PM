#include <iostream>
using namespace std;

// Base class with a public member
class Vehicle {
public:
    int number = 4; // Public member remains public in derived class
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
    c1.display();
    return 0;
}
