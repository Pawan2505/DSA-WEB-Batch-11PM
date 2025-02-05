#include<iostream>
using namespace std;

int main() {

    // outer loop -> row
    for(int row = 1; row <= 4; row++) {

        // inner loop -> cols
        for(int col = 1; col<=4; col++) {

            if((row == 2 || row == 3) && (col == 2 || col == 3)) {
                cout << " ";
            } else {
                cout << "*";
            }
        }

        cout << endl;
    }
}
