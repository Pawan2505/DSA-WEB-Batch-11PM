#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;
    int id;

    // Constructor Overloading
    Student() {
        cout << "Parameterless Constructor called S1.." << endl;
    }

    Student(string name) {
        this->name = name;
        cout << "Parameter Constructor called S2.." << endl;
    }

    Student(string name, int age) {
        this->name = name;
        this->age = age;
        cout << "Parameter Constructor called S3.." << endl;
    }

    Student(string name, int age, int id) {
        this->name = name;
        this->age = age;
        this->id = id;
        cout << "Parameter Constructor called S4.." << endl;
    }

    void getDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "ID: " << id << endl;
    }
};

int main() {
    Student s1;
    Student s2("Raj");
    Student s3("Janim", 22);
    Student s4("Utkarsh", 20, 1);

    s4.getDetails();
    return 0;
}
