#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter Number: ";
    cin >> num;

    int sum = 0;

    while(num > 0) {
        int digit = num % 10;  // last digit
        sum += digit;  // sum of digits
        num = num / 10;  // removing last digit
    }

    cout << "Sum: " << sum << endl;
}
