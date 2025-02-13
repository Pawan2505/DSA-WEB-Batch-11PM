#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    void draw() {
        cout << "Drawing Shape..." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void area() {
        cout << "Calculating Circle Area..." << endl;
    }
};

// Derived class 2
class Square : public Shape {
public:
    void area() {
        cout << "Calculating Square Area..." << endl;
    }
};

int main() {
    Circle c;
    Square s;
    c.draw();  // Inherited from Shape
    c.area();  // Circle-specific method
    s.draw();  // Inherited from Shape
    s.area();  // Square-specific method
    return 0;
}


// Note : A single base class is inherited by multiple derived classes.

// 👉 Key Takeaway:

// One base class (Shape) is inherited by multiple derived classes (Circle, Square).
// Each derived class has its own unique functionality.