#include<iostream>
using namespace std;

// Create class definition with members and methods
class Person {
    public:  // Access specifier for public members
        string name;
        int age;

        // Method to display member variables
        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    Person f;  // Create object

    // Initialize object properties outside of the class
    f.name = "Fatima Ji";
    f.age = 11;

    // Call method to display the properties
    f.display();
}
