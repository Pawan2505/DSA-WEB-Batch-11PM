#include <iostream>
using namespace std;

// Template class with two different types for name and age
template <typename T1, typename T2>
class Student
{
public:
    T1 name; // Data member for name (type T1)
    T2 age;  // Data member for age (type T2)

    // Constructor to initialize name and age
    Student(T1 name, T2 age)
    {
        this->name = name;
        this->age = age;
    }

    // Function to display student details
    T1 display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    // Creating an object of Student class with string for name and int for age
    Student<string, int> s1("Pawan", 25);
    s1.display(); // Calling display to show details
}
