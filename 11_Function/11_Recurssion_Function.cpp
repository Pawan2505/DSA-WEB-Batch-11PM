

#include<iostream>
using namespace std;


int factorial(int num){

    // Base Condition

    if(num==1){
        return 1;
    }

    return num * factorial(num-1);
}

int main(){

    int num;
    cout<<"Enter Number : ";
    cin>>num;

    int result = factorial(num);

    cout<<num<<" Factorial : "<<result<<endl;
    

}
