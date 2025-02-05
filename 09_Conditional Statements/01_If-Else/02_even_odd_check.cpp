#include <iostream>
using namespace std;

int main() {
    int num;

    // Check even or odd number
    cout << "Enter number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "Even Number" << endl;
    } else {
        cout << "Odd Number" << endl;
    }

    return 0;
}
