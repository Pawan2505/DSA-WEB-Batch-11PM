#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter Number: ";
    cin >> num;

    int temp = num;
    int rev = 0;

    while(num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if(temp == rev) {
        cout << "Palindrome Number!" << endl;
    } else {
        cout << "Not Palindrome Number!" << endl;
    }
}
