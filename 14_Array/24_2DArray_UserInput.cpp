#include<iostream>
using namespace std;

int main(){
    int row_size = 3;
    int col_size = 4;

    int arr[row_size][col_size];

    // user input
    for(int i = 0; i < row_size; i++){
        for(int j = 0; j < col_size; j++){
            cout<<"Row "<<i<<" index & Col "<<j<<" index: ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    // output
    for(int i = 0; i < row_size; i++){
        for(int j = 0; j < col_size; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
