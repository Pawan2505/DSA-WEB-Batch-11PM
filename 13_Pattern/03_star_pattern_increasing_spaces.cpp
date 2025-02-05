#include<iostream>
using namespace std;

int main() {

    // outer loop -> row
    for(int row = 1; row <= 4; row++) {

        // space 
        for(int space = 1; space < row; space++) {
            cout << " ";
        }

        // star
        for(int star = 1; star<=4; star++) {
            cout << "*";
        }

        cout << endl;
    }
}
