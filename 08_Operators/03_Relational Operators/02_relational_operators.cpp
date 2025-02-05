#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    // Relational operators return boolean values (0 = false, 1 = true)
    cout << (a == b) << endl;  // 0 (false)
    cout << (a != b) << endl;  // 1 (true)
    cout << (a >= b) << endl;  // 0 (false)
    cout << (a <= b) << endl;  // 1 (true)
    cout << (a > b) << endl;   // 0 (false)
    cout << (a < b) << endl;   // 1 (true)

    return 0;
}
