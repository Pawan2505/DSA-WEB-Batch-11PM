#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;

    cout << !(a == b || b > c) << endl;  // NOT (true: 1)
    cout << !((a != b) || (c > a)) << endl;  // NOT (false: 0)
    cout << !((a >= b) || (b > a)) << endl;  // NOT (false: 0)
    cout << !((a <= b) || (b > c)) << endl;  // NOT (false: 0)
    cout << !((a > b) || (c > a)) << endl;   // NOT (false: 0)
    cout << !((a < b) || (a <= c)) << endl;  // NOT (false: 0)

    return 0;
}
