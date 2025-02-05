#include<iostream>
using namespace std;

// Create class with private members and getter/setter methods
class Person {
    private:
        string name;
        int age;

    public:
        // Setter method to set values
        void setData(string name, int age) {
            this->name = name;  // 'this' keyword refers to current object's members
            this->age = age;
        }

        // Getter method to display values
        void getDetails() {
            cout << "Name: " << this->name << endl;
            cout << "Age: " << this->age << endl;
        }
};

int main() {
    Person f, j;  // Create objects

    // Set data using setter method
    f.setData("Fatima", 18);
    f.setData();  // Error: invalid setter usage (missing parameters)

    // Get and display details
    f.getDetails();
    
    // Another object
    j.setData("Janam", 11);
    j.getDetails();
}
