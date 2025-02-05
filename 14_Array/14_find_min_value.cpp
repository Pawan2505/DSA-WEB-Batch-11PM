#include<iostream>
using namespace std;

int main(){
    
    int arr[5] = {10, 3, 5, 8, 2};

    // Initialize minValue to the first element
    int minValue = arr[3];

    // Find the minimum value in the array
    for(int i = 0; i < 5; i++){
        if(arr[i] < minValue){
            minValue = arr[i];
        }
    }

    cout << "Min Value: " << minValue << endl;

    return 0;
}
