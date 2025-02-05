#include<iostream>
using namespace std;

int main() {

    // row
    for(int i = 1; i <= 4; i++) {

        // space
        for(int j = 1; j <= 4 - i; j++) {
            cout << " ";
        }

        // star
        for(int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }
}
