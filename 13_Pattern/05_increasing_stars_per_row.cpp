#include<iostream>
using namespace std;

int main() {

    // row
    for(int row = 1; row <= 4; row++) {

        // star
        for(int star = 1; star <= row; star++) {
            cout << "*";
        }

        cout << endl;
    }
}
