#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter Number: ";
    cin >> num;

    int count = 0;
    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            count++;
        }
    }

    cout << "Count: " << count << endl;
    if(count == 2) {
        cout << "Prime Number!" << endl;
    } else {
        cout << "Not Prime!" << endl;
    }
}
