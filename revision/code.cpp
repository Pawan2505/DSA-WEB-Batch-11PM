// #include<iostream>
// // using namespace std;

// int main(){
//     std::cout<<"Hello World!"<<std::endl;
// }

// #include<iostream>
// // using namespace std;

// int main(){
//     int num;
//     std::cout<<"Enter Number :";
//     std::cin>>num;

//     std::cout<<"Number : "<<num<<std::endl;
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int num;
//     cout<<"Enter Number :";
//     cin>>num;

//     cout<<"Number : "<<num<<endl;
// }



// Constant 

// #include<iostream>
// using namespace std;

// int main(){

//     const int num;
//     cout<<"Enter Number :";
//     // cin>>num; // Not ok -> we can not take const variable input from user ,  it should be initialisation in same by manually

//     cout<<"Number : "<<num<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     const int num = 10;  // ok

//     cout<<"Number : "<<num<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){

//     const int num; //not ok => it should must initilsation

//     // num = 20;  // Not ok

//     // cout<<"Number : "<<num<<endl;
// }

// micro

// #include<iostream>
// using namespace std;

// #define NUM 10

// int main(){

// cout<<"Number : "<<NUM<<endl;

// }

// #include<iostream>
// using namespace std;

// #define NUM 10

// int main(){

//     NUM = 40; // not ok

// cout<<"Number : "<<NUM<<endl;

// }

// #include<iostream>
// using namespace std;

// #define NAME "Pawan"

// int main(){

// cout<<"Name : "<<NAME<<endl;

// }


// variable => only one time we can declared one variable

// 1. scope different
// 2. naespace keyword


// Rule 1. scope different

// #include<iostream>
// using namespace std;

// int main(){

// int a = 10;  // global variable

// {
//     int a = 20;  // local variable
//     cout<<a<<endl; //20
// }

// cout<<a<<endl; //10

// }



// 2. naespace keyword



// #include<iostream>
// using namespace std;

// int a = 100;

// int main(){

// int a = 10;  // global variable

// {
//     int a = 20;  // local variable
//     cout<<a<<endl; //20
// }

// cout<<a<<endl; //10

// cout<<::a<<endl;

// }
#include<iostream>
using namespace std;

int a = 100;

namespace na{
    int a = 400;
}
namespace nb{
    int a = 500;
}

int main(){

int a = 10;  // global variable

{
    int a = 20;  // local variable
    cout<<a<<endl; //20
}


cout<<a<<endl; //10

cout<<::a<<endl;

cout<<na::a<<endl;
cout<<nb::a<<endl;

}