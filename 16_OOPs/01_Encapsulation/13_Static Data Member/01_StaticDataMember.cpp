#include<iostream>
using namespace std;

// Define the Teacher class
class Teacher {

    public:
        string name;  // Instance variable (object-specific)
        int age;      // Instance variable (object-specific)
        static double salary;  // Static data member (shared by all objects)

    // Default Constructor
    Teacher() {
        this->name = "Raj";
        this->age = 11;
    }

    // Parameterized Constructor
    Teacher(string name, int age) { 
        this->name = name;
        this->age = age;
    }

    // Function to display teacher details
    void getDetails() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Salary : " << salary << endl;  // Access static member
    }
};

// Initialize static data member outside the class
double Teacher::salary = 99;

int main() {
    // Create objects of the Teacher class
    Teacher t1;  // Calls default constructor
    
    Teacher t2("Vraj", 5);  // Calls parameterized constructor

    // Display details of both teachers
    t1.getDetails();
    t2.getDetails();
}
