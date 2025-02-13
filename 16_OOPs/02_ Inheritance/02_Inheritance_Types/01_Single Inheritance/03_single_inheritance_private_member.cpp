#include <iostream>
using namespace std;

// Base class with a private member
class Vehicle {
private:
    int number; // Private members are not inherited

public:
    void setNumber(int n) {
        number = n;
    }
    int getNumber() {
        return number;
    }
};

// Derived class
class Car : public Vehicle {
public:
    void display() {
        // cout << "Vehicle has " << number << " wheels" << endl;  ❌ Error: Private members are not accessible
        cout << "Vehicle has at least 2 wheels" << endl;
    }
};

int main() {
    Car c1;
    c1.display();
    return 0;
}
