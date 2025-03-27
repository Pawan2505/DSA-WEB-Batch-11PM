#include<iostream>
using namespace std;


int linearSearch(int key, int arr[]){

    bool ispresent = false;

    for (int i = 0; i < 10; i++){
        if(key == arr[i]){
            cout << key << " present at " << i << " index." << endl;
            ispresent = true;
        }
    }

    if(!ispresent){
        cout << "Element does not exist!" << endl;
    }


}

int main(){
    int arr[10] = {12, 34, 56, 78, 34, 23, 12, 345, 66, 2};
    int searchElement;

    cout << "Array : ";

    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Search Element : ";
    cin >> searchElement;

    linearSearch(searchElement, arr);
}

