//Constructor and Destructor

#include<iostream>
using namespace std;

class Teacher {
public:
    // Constructor
    Teacher() {
        cout << "Constructor Called..." << endl;
    }

    // Destructor
    ~Teacher() {
        cout << "Destructor Called..." << endl;
    }
};

int main() {
    Teacher t1;  // Constructor will be called when the object is created
                 // Destructor will be called automatically when t1 goes out of scope
}
