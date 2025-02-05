

#include<iostream>
using namespace std;


int addition(int num){

    // Base Condition

    if(num==1){
        return 1;
    }

    return num + addition(num-1);
}

int main(){

    int num;
    cout<<"Enter Number : ";
    cin>>num;

    int result = addition(num);

    cout<<" Addition : "<<result<<endl;
    

}