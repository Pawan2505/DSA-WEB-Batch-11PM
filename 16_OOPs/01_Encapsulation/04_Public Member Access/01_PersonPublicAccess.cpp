
#include<iostream>
using namespace std;

// Create class with public members
class Person {
    public:  // Public access specifier for direct access to members
        string name;
        int age;
};

int main() {
    Person f;  // Create object

    // Access public members directly
    f.name = "Fatima Ji";
    f.age = 11;

    // Display values
    cout << "Name: " << f.name << endl;
    cout << "Age: " << f.age << endl;
}
