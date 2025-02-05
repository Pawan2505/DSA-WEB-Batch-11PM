
#include<iostream>
using namespace std;

int main() {
    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= 3; col++) {
            if (row == 2 && col == 2) {
                cout << "1";
            } else if (row == 3 && col == 2) {
                cout << "2";
            } else {
                cout << "3";
            }
        }
        cout << endl;
    }
    return 0;
}
