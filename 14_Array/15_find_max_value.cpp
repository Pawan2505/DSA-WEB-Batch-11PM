#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    
    int arr[8] = {10, 3, 5, 8, 2, 85, 3, 96};

    // Initialize maxValue to the smallest possible integer
    int maxValue = INT_MIN;

    // Find the maximum value in the array
    for(int i = 0; i < 8; i++){
        if(arr[i] > maxValue){
            maxValue = arr[i];
        }
    }

    cout << "Max Value: " << maxValue << endl;

    return 0;
}
