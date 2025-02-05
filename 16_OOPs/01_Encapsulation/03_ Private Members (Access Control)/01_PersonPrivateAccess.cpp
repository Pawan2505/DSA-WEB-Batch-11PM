#include<iostream>
using namespace std;

// Create class with private members
class Person {
    private:  // Private access specifier for data hiding
        string name;
        int age;

    public:
        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    Person f;  // Create object

    // Initialize object properties (not directly accessible due to private access)
    f.name = "Fatima Ji";  // Error: 'name' is private
    f.age = 11;  // Error: 'age' is private

    f.display();  // Error will occur here due to access control
}
