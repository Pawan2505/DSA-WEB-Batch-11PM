#include<iostream>
using namespace std;

int main(){
    int num = 10;
    int sum = 0;

    while(num >= 1){
        sum += num;  // Add num to sum
        num--;       // Decrement num
    }

    cout << sum;  // Output the sum
}
