#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3; // Binary: a = 0101, b = 0011

    cout << "Bitwise Operators in C++" << endl;
    cout << "-------------------------" << endl;

    // Bitwise AND
    cout << "a & b  = " << (a & b) << "  (0101 & 0011 = 0001 = 1)" << endl;

    // Bitwise OR
    cout << "a | b  = " << (a | b) << "  (0101 | 0011 = 0111 = 7)" << endl;

    // Bitwise XOR
    cout << "a ^ b  = " << (a ^ b) << "  (0101 ^ 0011 = 0110 = 6)" << endl;

    // Bitwise NOT
    cout << "~a     = " << (~a) << "  (~0101 = 1010 = -6 in 2's complement form)" << endl;

    // Left Shift (Multiplication by 2^n)
    cout << "a << 1 = " << (a << 1) << "  (Left shift by 1: 0101 -> 1010 = 10)" << endl;

    // Right Shift (Division by 2^n)
    cout << "a >> 1 = " << (a >> 1) << "  (Right shift by 1: 0101 -> 0010 = 2)" << endl;

    return 0;
}
