#include<iostream>
#include<math.h>
using namespace std;

int countValue(int num) {

    int count = 0;

    while(num > 0) {
        num = num / 10;
        count++;
    }

    return count;
}

int main() {

    int num;
    cout << "Enter Number: ";
    cin >> num;

    int power = countValue(num);
    cout << "Power: " << power << endl;

    int original = num;
    int sum = 0;

    while(num > 0) {
        int digit = num % 10;
        sum += pow(digit, power);
        num = num / 10;
    }

    if(original == sum) {
        cout << "Armstrong Number!" << endl;
    } else {
        cout << "Sorry, Not Armstrong Number!" << endl;
    }
}
