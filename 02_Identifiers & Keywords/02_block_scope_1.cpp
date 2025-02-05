#include<iostream>
using namespace std;

int main(){
    int num = 10;  // local variable inside main
    cout << "Num1 : " << num << endl; // Output: 10

    {
        // Uncomment the next line to shadow the variable 'num'
        // int num = 20; // local variable inside inner block, shadows outer num
        cout << "Num2 : " << num << endl; // Output: 10 (outer num)
    }
    
    cout << "Num3 : " << num << endl; // Output: 10 (outer num)
}
