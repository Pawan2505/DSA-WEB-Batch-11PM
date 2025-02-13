#include <iostream>
using namespace std;

// Base class with a private member
class Vehicle {
private:
    int number = 4; // Private member (not accessible in derived class)
};

// Derived class (publicly inherits Vehicle)
class Car : public Vehicle {
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


// Note : Private members of the base class are not inherited in the derived class.
// 👉 Key Takeaway:
// Private members (number) are not inherited, so display() cannot access them in Car.