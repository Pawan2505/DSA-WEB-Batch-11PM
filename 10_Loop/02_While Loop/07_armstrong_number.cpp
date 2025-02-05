#include<iostream>
#include<math.h>
using namespace std;

int countValue(int num){
    int count = 0;
    while(num > 0){
        num = num / 10;
        count++;
    }
    return count;
}

int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num;

    // Calculate the number of digits (power)
    int power = countValue(num);
    cout << "Power: " << power << endl;

    int original = num;
    int sum = 0;

    // Calculate the sum of digits raised to the power
    while(num > 0){
        int digit = num % 10;
        sum += pow(digit, power);
        num = num / 10;
    }

    // Check if the number is Armstrong
    if(original == sum){
        cout << "Armstrong Number!" << endl;
    } else {
        cout << "Sorry, Not Armstrong Number!" << endl;
    }

    return 0;
}
