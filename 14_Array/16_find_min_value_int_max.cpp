#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    
    int arr[8] = {10, 3, 5, 8, 2, 85, 3, 96};

    // Initialize minValue to the largest possible integer
    int minValue = INT_MAX;

    // Find the minimum value in the array
    for(int i = 0; i < 8; i++){
        if(arr[i] < minValue){
            minValue = arr[i];
        }
    }

    cout << "Min Value: " << minValue << endl;

    return 0;
}
