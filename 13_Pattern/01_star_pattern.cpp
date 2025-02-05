#include<iostream>
using namespace std;

int main() {

    // outer loop -> row
    for(int row = 1; row <= 4; row++) {

        // inner loop -> cols
        for(int col = 1; col<=4; col++) {
            cout << "*";
        }

        cout << endl;
    }
}
