#include<iostream>
using namespace std;

// Define the Teacher class
class Teacher {
    
    public:
        static double salary;  // Static data member (shared by all objects)

    // Static function to access static data members
    static void getDetails() {
        cout << "Salary : " << salary << endl;
    }
};

// Initialize static data member outside the class
double Teacher::salary = 99;

int main() {
    // Call static function using class name (no object needed)
    Teacher::getDetails();
}
