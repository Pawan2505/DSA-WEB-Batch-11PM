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
    // Array of objects initialized using constructors
    Person p[2] = {
        Person("Pawan", 24),
        Person("Manish", 25)
    };

    cout << "Object first details: " << endl;
    p[0].getDetails();

    cout << "Object second details: " << endl;
    p[1].getDetails();

    return 0;
}
