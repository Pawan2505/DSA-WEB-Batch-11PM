#include <iostream>
using namespace std;

// Define the Person class
class Person {
protected:
    string name;
    int age;

public:
    // Constructor to initialize data members
    Person(string firstname, int currentage) {
        name = firstname;
        age = currentage;
    }

    // Getter method to display values
    void getDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Array of pointers to objects
    Person* p[2];

    // Allocate memory for objects dynamically using constructor
    p[0] = new Person("Pawan", 24);
    p[1] = new Person("Manish", 25);

    // Get details
    p[0]->getDetails();
    p[1]->getDetails();

    // Free allocated memory
    delete p[0];
    delete p[1];

    return 0;
}
