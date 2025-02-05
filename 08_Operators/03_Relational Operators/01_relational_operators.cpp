#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    cout << (a == b) << endl;  // Equal to (false: 0)
    cout << (a != b) << endl;  // Not equal to (true: 1)
    cout << (a >= b) << endl;  // Greater than or equal to (false: 0)
    cout << (a <= b) << endl;  // Less than or equal to (true: 1)
    cout << (a > b) << endl;   // Greater than (false: 0)
    cout << (a < b) << endl;   // Less than (true: 1)

    return 0;
}
