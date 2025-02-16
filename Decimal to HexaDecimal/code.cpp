
// hexa decimal base -> 16 hota hai 
// isme number hota hai : 
// 0 to 9 -> 10 character
// A to F -> 6 character

// 10 + 6 => 16


// Decimal -> 0 t0 9 => 10 character
// decimal ka base 10 hota hai



#include<iostream>
using namespace std;

int main(){

    int num, rem, temp, i, j = 0;

    char hexa[50];

    cout<<"Enter any decimal Number : ";
    cin>>num;

    temp = num;

    while(temp>0){
        rem= temp%16;

        if(rem < 10){
            hexa[j++] = 48+rem;
        }else{
            hexa[j++] = 55+rem;
        }

        temp = temp/16;
    }

    for(i = j-1; i>= 0; i--){
        cout<<hexa[i];
    }
}



// ASCII :

// 48 -> 0
// 49 -> 1 ....


// 65 = A
// 66 = B

// ex : 55 + 10 => A
