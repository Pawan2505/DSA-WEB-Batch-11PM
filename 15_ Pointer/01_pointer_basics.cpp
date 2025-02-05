#include<iostream>
using namespace std;

int main(){
    int a = 10;  // variable declared
    int *ptr = &a;  // pointer variable declared and assign address of a.

    // value
    cout << "a : " << a << endl;
    cout << "*ptr : " << *ptr << endl;

    // address
    cout << "Address of a : " << &a << endl;
    cout << "Address of ptr : " << ptr << endl;
}
