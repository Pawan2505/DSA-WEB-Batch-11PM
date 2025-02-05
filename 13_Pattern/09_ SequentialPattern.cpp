#include<iostream>
using namespace std;

int main() {
    int num = 1;
    for (int row = 1; row <= 4; row++) {
        for (int col = 1; col <= 4; col++) {
            cout << num;
        }
        cout << endl;
    }
    return 0;
}
