#include <iostream>
using namespace std;

int main() {
    int num;

    // Check if the number is positive, negative, or zero
    cout << "Enter Number: ";
    cin >> num;

    if (num > 0) {
        cout << "Positive Number" << endl;
    } else if (num < 0) {
        cout << "Negative Number" << endl;
    } else {
        cout << "Number is neither positive nor negative!" << endl;
    }

    return 0;
}
