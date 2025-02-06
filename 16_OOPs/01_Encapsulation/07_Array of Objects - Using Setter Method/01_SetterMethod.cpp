#include <iostream>
using namespace std;

// Define the Person class
class Person {
private:
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
    // Array of objects
    Person p[2];

    // Set details for each object
    p[0].setDetails("Pawan", 24);
    p[1].setDetails("Manish", 25);

    // Get details of each object
    p[0].getDetails();
    p[1].getDetails();

    return 0;
}
