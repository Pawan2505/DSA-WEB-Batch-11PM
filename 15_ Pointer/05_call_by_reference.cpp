#include<iostream>
using namespace std;

int print(int &x){
    cout << "Value of x : " << x << endl;
    cout << "Address Value of x : " << &x << endl;
    x = 100;
}

int main(){
    int a = 10;
    print(a);
    cout << "Value of a : " << a << endl;
    cout << "Address of a : " << &a << endl;
}
