#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;

    cout << ((a < b) && (b > c)) << endl;  // AND (false: 0)
    cout << ((a != b) && (c > a)) << endl; // AND (true: 1)
    cout << ((a >= b) && (b > a)) << endl; // AND (false: 0)
    cout << ((a <= b) && (b > c)) << endl; // AND (false: 0)
    cout << ((a > b) && (c > a)) << endl;  // AND (false: 0)
    cout << ((a < b) && (a <= c)) << endl; // AND (true: 1)

    return 0;
}
