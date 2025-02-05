
#include<iostream>
using namespace std;

int main() {
    for (int row = 1; row <= 4; row++) {
        // space
        for (int space = 1; space <= row - 1; space++) {
            cout << " ";
        }

        // triangle
        for (int triangle = 7; triangle >= 2 * row - 1; triangle--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
