#include<iostream>
using namespace std;

int main() {
    for (int row = 1; row <= 4; row++) {
        // space
        for (int space = 1; space <= 4 - row; space++) {
            cout << " ";
        }

        // triangle
        for (int triangle = 1; triangle <= 2 * row - 1; triangle++) {
            if (row == 4) {
                cout << "*";
            } else {
                if (triangle == 1 || triangle == 2 * row - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
