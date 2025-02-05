#include<iostream>
using namespace std;

int main() {
    int a = 10;

    // Correctly store the size of the integer variable in a variable of appropriate type
    size_t result = sizeof(a);  // sizeof returns a size_t, which can hold the size

    cout << "Size of integer 'a' in bytes: " << result << endl;
    return 0;
}
