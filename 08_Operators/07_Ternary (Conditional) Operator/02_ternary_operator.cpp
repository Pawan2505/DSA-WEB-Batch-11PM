#include <iostream>
using namespace std;

int main() {
    int a = 50, b = 100, c = 30;

    // Ternary Operator - Short form of if-else condition
    (a > b && a > c) ? cout << "a is greater"
    : (b > a && b > c) ? cout << "b is greater"
    : cout << "c is greater";

    return 0;
}
