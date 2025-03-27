// #include <iostream>
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int key, int arr[], int n){

    int start = 0;
    int end = n - 1;

    while (start<=end){

        int mid = start+(end-start) / 2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[10] = {12, 34, 56, 78, 34, 23, 12, 345, 66, 2};
    sort(arr, arr + 10);
    int searchElement;

    cout << "Array : ";

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Search Element : ";
    cin >> searchElement;

    int idx = binarySearch(searchElement, arr,10);

    if(idx <0){
        cout << "Element not present in array!" << endl;
    }else{
        cout << searchElement << " present at " << idx << " index." << endl;
    }
}