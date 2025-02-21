#include <iostream>
using namespace std;

class Student
{
public:
    string *name;
    int age;

    Student(string n, int a)
    {
        this->name = new string(n);

        this->age = a;
    }

    // copy constructor

    Student(const Student &other)
    {
        this->name = new string(*other.name);

        age = other.age;
    }

    ~Student()
    {
        cout << "Distructor called..." << endl;

        delete name;
    }

    void display()
    {
        cout << "I am " << *name << ". My age is " << age << endl;
    }
};

int main()
{
    Student s1("Vraj", 24); // parameterized constructor

    Student s2 = s1; // copy constructor

    s1.display();

    s2.display();

    cout << "Updated data getting..." << endl;

    *s2.name = "Prakash";

    s1.display();
    s2.display();
}