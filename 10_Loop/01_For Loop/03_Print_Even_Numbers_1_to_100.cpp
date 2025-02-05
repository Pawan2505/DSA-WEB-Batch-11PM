#include<iostream>
using namespace std;

int main() {
    int num;
    for(num = 1; num <= 100; num++) {
        if(num % 2 == 0) {
            cout << num << " ";
        }
    }
}
