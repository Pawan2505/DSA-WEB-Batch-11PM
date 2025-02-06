#include <iostream>
using namespace std;

// Define the Person class
class Person {
protected:
    string name;
    int age;

public:
    // Setter method to assign values
    void setDetails(string firstname, int currentage) {
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

    // Allocate memory for objects dynamically
    p[0] = new Person();
    p[1] = new Person();

    // Set details using setter method
    p[0]->setDetails("Pawan", 24);
    p[1]->setDetails("Manish", 25);

    // Get details
    p[0]->getDetails();
    p[1]->getDetails();

    // Free allocated memory
    delete p[0];
    delete p[1];

    return 0;
}
