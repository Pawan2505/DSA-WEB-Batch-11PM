#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, c = 30;

    // Logical AND (&&) - returns true if both conditions are true
    cout << ((a < b) && (b > c)) << endl;  // 0 (false)
    cout << ((a != b) && (c > a)) << endl; // 1 (true)

    // Logical NOT (!) - reverses the boolean result
    cout << !(a == b || b > c) << endl;  // 1 (true)
    
    return 0;
}
