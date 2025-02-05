#include <iostream>
using namespace std;

// function to update the original value
void increment(int num) {
    cout << "post inc : " << num++ << endl;  // 5
    cout << num << endl;  // 6
}

int main() {
    int number = 5;
    increment(number); // Passing 'number' by value
    cout << number << endl;  // 5
    return 0;
}
