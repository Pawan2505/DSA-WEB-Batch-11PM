

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter Number: ";
    cin >> num;

    // If-else block to check if the number is positive, negative, or zero
    if(num > 0){
        cout << "Positive Number" << endl;
    }
    else if(num < 0){
        cout << "Negative Number" << endl;
    }
    else {
        cout << "Number is neither positive nor negative!" << endl;
    }
}
