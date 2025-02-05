
#include<iostream>
using namespace std;

int main(){
    int num;

    int sum = 0;

    // For loop to calculate the sum of numbers from 1 to 10
    for(num = 1; num <= 10; num++){
        sum += num;  // Add the current number to sum
    }

    cout << sum << endl;  // Output the final sum
}
