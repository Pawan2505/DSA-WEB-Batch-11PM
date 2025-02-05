#include<iostream>
using namespace std;

int main(){
    int arr[10] = {12, 34, 5, 67, 8, 9, 1223, 56, 78, 2};

    cout << "Before swap/reverse: ";
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    int i = 0;
    int j = 9;

    // Reverse the array by swapping elements
    while(i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    cout << "After swap/reverse: ";
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
