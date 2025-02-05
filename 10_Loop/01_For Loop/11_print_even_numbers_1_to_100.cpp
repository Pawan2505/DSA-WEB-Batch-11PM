
#include<iostream>
using namespace std;

int main(){
    int num;

    // For loop to print even numbers between 1 and 100
    for(num = 1; num <= 100; num++){
        if(num % 2 == 0){  // Check if the number is divisible by 2 (even number)
            cout << num << " ";  // Output the even number
        }
    }
}
