#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10, 23, 30, 45, 50};

    // For Each Loop to print even numbers
    for(int element : arr){
        if(element % 2 == 0){
            cout << element << " ";
        }
    }

    return 0;
}
