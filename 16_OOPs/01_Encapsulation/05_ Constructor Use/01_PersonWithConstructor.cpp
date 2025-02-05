
#include<iostream>
using namespace std;

// Create class with constructor for initialization
class Person {
    private:
        string name;
        int age;

    public:
        // Constructor with parameters
        Person(string firstname, int currentage) {
            name = firstname;
            age = currentage;
        }

        // Method to display details
        void getDetails() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    // Create object and initialize using constructor
    Person p("Prakash", 15);

    // Display details using method
    p.getDetails();
}
