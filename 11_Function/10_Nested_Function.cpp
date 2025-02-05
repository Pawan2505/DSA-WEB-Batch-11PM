
#include<iostream>
using namespace std;

int calculate(){
    cout<<"Outer Function Called.."<<endl;

    auto addition=[](){
        cout<<"Inner Function Called.."<<endl;
    };

    addition();
}

int main(){

    calculate();


}