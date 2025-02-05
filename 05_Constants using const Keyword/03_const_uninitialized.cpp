// Description: Demonstrates error when trying to initialize `const` using `cin`.

#include<iostream>
using namespace std;

int main() {
    const int num;  // ❌ Not allowed (const variables must be initialized)

    cout << "Please enter a number: ";
    cin >> num;  // ❌ Error: Cannot modify a const variable

    cout << num << endl;

    return 0;
}
