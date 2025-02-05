#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int *ptr = &x;

    cout << x << endl;  // 10
    cout << *ptr << endl; // 10

    *ptr = 80;

    cout << x << endl;  // 80
    cout << *ptr << endl; // 80
}
