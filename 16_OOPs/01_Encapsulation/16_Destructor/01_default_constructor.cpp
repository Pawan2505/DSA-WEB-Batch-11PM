//simple constructor

#include<iostream>
using namespace std;

class Teacher {
public:
    // Constructor
    Teacher() {
        cout << "Constructor Called..." << endl;
    }
};

int main() {
    Teacher t1;  // Automatic parameterless (default) constructor call
}
