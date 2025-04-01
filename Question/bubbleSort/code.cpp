#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){

// outer loop -> n-1 iteration

for (int i = 0; i < n; i++){

    // inner loop -> largest element -> last push -> adjecent element -> swap

    for (int j = 0; j < n - i-1; j++ ){
        if(arr[j]> arr[j+1]){
            swap(arr[j], arr[j + 1]);
        }
    }
}
}



int main(){
    int n = 5;
    int arr[n] = {5, 8, 20, 2, 6};
    bubbleSort(arr, n);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}