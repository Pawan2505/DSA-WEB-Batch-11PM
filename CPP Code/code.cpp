// 18-12-2024

// Github repo : https://github.com/Pawan2505/DSA-WEB-11AM.git
// Online Compiler : https://ide.codingblocks.com/
//  Today HW : https://docs.google.com/document/d/1XmOiyG5NNIfABevn_JaQmVhrsm0sKcfrLvvuMMRpilM/edit?tab=t.0


// #include<iostream>
// using namespace std;

// int main(){

//     cout<<"Hello Good Class!";

// }



// Keyword : https://www.geeksforgeeks.org/cpp-keywords/


// #include<iostream>
// using namespace std;

// int main(){

//     // int 12num = 10;  // Not Ok
//     // int num12 = 10; // ok
//     // int num value = 10; // Not Ok
//     // int num_value = 10; //  Ok
//     // int _value = 10; //  Ok
//     // int $value = 10; //  Ok
//     // int @value = 10; // Not  Ok

//     // int float = 10;  // Not ok 

//     // double djfd = 223.455;

//     // Data Type

//     int num = 10;
//     cout<<num<<endl;

//     float num1 = 20.356f;
//     cout<<num1<<endl;

//     double num2 = 234.567987654f;
//     cout<<num2<<endl;

//     string str = "Pawan Maurya";

//     cout<<str<<endl;

//     char ch = 'a';

//     cout<<ch<<endl;

//     bool value = false;

//     cout<<value<<endl;


// }



// Constant :  1. micro, 2. const

// micro

// #include<iostream>
// using namespace std;
// #define num "Pawan Maurya"   // gloable variable
// int main(){

// num = "Pooja"; // Not Ok

// cout<<num<<endl;
// }

// #include<iostream>
// using namespace std;
// #define x 10
// #define y 20
// int main(){

// cout<<x+y<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){

// const int num = 10;

// num = 20;  // Not Ok

// cout<<num<<endl; 
// }





// #include<iostream>
// using namespace std;

// int main(){

// const int num = 10;

// num = 20;  // Not Ok

// cout<<num<<endl; 

// }


// #include<iostream>
// using namespace std;

// int main(){

// const int num;

// cout<<"Please enter number : "<<endl;

// cin>>num;

// cout<<num<<endl; 

// }


// Block scope


// #include<iostream>
// using namespace std;

// int main(){

//     int num = 10;  // global variable / local variable
//     cout<<"Num1 : "<<num<<endl; //10

//     {
//         // int num = 20; // local variable
//         cout<<"Num2 : "<<num<<endl;  //20
//     }
    
//     cout<<"Num3 : "<<num<<endl; //10
// }



// #include<iostream>
// // using namespace std;

// namespace na{
//     int a = 100;
// }
// namespace nb{
//     int a = 200;
// }

// int a = 60;  // global variable

// int main(){

//     std::cout<<nc::a<<std::endl;

//     int a = 10;

//     std::cout<<a<<std::endl;   // 10

//     {
//         int a = 20;
//         std::cout<<a<<std::endl;  //20
//     }

//     a = 60;
//     std::cout<<a<<std::endl;  //10

//     std::cout<<::a<<std::endl;  //:: ->  scope resulation operator
//     std::cout<<na::a<<std::endl;  //:: ->  scope resulation operator
//     std::cout<<nb::a<<std::endl;  //:: ->  scope resulation operator

//     return 0;
// }


// #include<iostream>

// int main(){

// using namespace std;

// int a = 10;

// cout<<a<<endl;

// }


// #include<iostream>

// int main(){

// using namespace std;

// int a = 10;

// cout<<a<<endl;

// }


// Operator :  Uniary Operator

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     a++;

//     cout<<a<<endl;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     ++a;

//     cout<<a<<endl;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     a--;

//     cout<<a<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     --a;

//     cout<<a<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<"Addition : "<<(a+b)<<endl;
//     cout<<"Multiply : "<<(a*b)<<endl;
//     cout<<"sub :  : "<<(a-b)<<endl;
//     cout<<"Divide : "<<(a/b)<<endl;
//     cout<<"Remainder : "<<(a%b)<<endl;
// }


//  Arithmetic Operator

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<"Addition : "<<(a+b)<<endl;
//     cout<<"Multiply : "<<(a*b)<<endl;
//     cout<<"sub :  : "<<(a-b)<<endl;
//     cout<<"Divide : "<<(a/b)<<endl;
//     cout<<"Remainder : "<<(a%b)<<endl;
// }


// Conditional Statement

// #include<iostream>
// using namespace std;

// int main(){
//     int fatima_age = 19;
//     int khushi_age = 20;

//     if(fatima_age>khushi_age){

//         cout<<"Fatima age greater than Khushi"<<endl;
//     }else{
//         cout<<"Khushi age greater than fatima"<<endl;
//     }
// }


// Else if 


// #include<iostream>
// using namespace std;

// int main(){

// char choice;

// while(choice == 'y' || 'Y'){

//     if(choice == 'n'){
//         cout<<"Thank You!"<<endl;
//         break;
//     }
        
//     int marks;  // declaration

//     cout<<"Enter Marks : ";

//     cin>>marks; // user input

//     if(marks >= 90){

//         cout<<"Grade A+"<<endl;
//         cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >= 80 ){
//         cout<<"Grade A"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >=70 ){
//         cout<<"Grade B+"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >=60 ){
//         cout<<"Grade B"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >=50 ){
//         cout<<"Grade C"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else{
//         cout<<"Sorry, You are failed!"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
// }
  
// }


// Relation Operator

// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;
//     int b = 20;

//     cout<<(a == b)<<endl;  // 0
//     cout<<(a != b)<<endl;  // 1
//     cout<<(a >= b)<<endl;  // 0
//     cout<<(a <= b)<<endl;  // 1 
//     cout<<(a > b)<<endl;  // 0
//     cout<<(a < b)<<endl; // 1
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;
//     int b = 20;
//     int c =30;

//     cout<<( a < b && b > c)<<endl;  // 0
//     cout<<((a!=b) && (c>a))<<endl;  // 1
//     cout<<((a>=b) && (b>a))<<endl;  // 0
//     cout<<((a<=b) && (b>c))<<endl;  // 0
//     cout<<((a>b) && (c>a))<<endl;  // 0
//     cout<<((a<b) && (a<=c)) <<endl; // 1
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;
//     int b = 20;
//     int c =30;

//     cout<<!( a == b || b > c)<<endl;  // 1
//     cout<<!((a!=b) || (c>a))<<endl;  // 0
//     cout<<!((a>=b) || (b>a))<<endl;  // 0
//     cout<<!((a<=b) || (b>c))<<endl;  // 0
//     cout<<!((a>b) || (c>a))<<endl;  // 0
//     cout<<!((a<b) || (a<=c)) <<endl; // 0
// }
// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;
//     int b = 5;

//     cout<<(a^b)<<endl;

// }
// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;

//     cout<<(a>>2)<<endl;

// }

// #include<iostream>
// using namespace std;

// int main(){

//     int a = 5;
//     int b = 10;

//     cout<<(a%b)<<endl;

// }


// #include<iostream>
// using namespace std;

// int main(){

//     int a = 5;
  
//   //  a = a + 10;

//     a += 10;

//     cout<<a<<endl;

// }



// #include<iostream>
// using namespace std;

// int main(){

//     int a = 5;
  
//   //  a = a + 10;

//     a += 10;

//     cout<<a<<endl;

// }


// #include<iostream>
// using namespace std;

// int main(){

//     int a = 50;
  
//     int b = 100;

//     int c=30;
//    (a>b && a>c)?  cout<<"a is greater" : (b>a && b>c)?  cout<<"b is greater":  cout<<"c is greater";

// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<"Addition : "<<(a+b)<<endl;
//     cout<<"Multiply : "<<(a*b)<<endl;
//     cout<<"sub :  : "<<(a-b)<<endl;
//     cout<<"Divide : "<<(a/b)<<endl;
//     cout<<"Remainder : "<<(a%b)<<endl;
// }


//  Arithmetic Operator

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<"Addition : "<<(a+b)<<endl;
//     cout<<"Multiply : "<<(a*b)<<endl;
//     cout<<"sub :  : "<<(a-b)<<endl;
//     cout<<"Divide : "<<(a/b)<<endl;
//     cout<<"Remainder : "<<(a%b)<<endl;
// }


// Conditional Statement

// #include<iostream>
// using namespace std;

// int main(){
//     int fatima_age = 19;
//     int khushi_age = 20;

//     if(fatima_age>khushi_age){

//         cout<<"Fatima age greater than Khushi"<<endl;
//     }else{
//         cout<<"Khushi age greater than fatima"<<endl;
//     }
// }


// Else if 


// #include<iostream>
// using namespace std;

// int main(){

// char choice;

// while(choice == 'y' || 'Y'){

//     if(choice == 'n'){
//         cout<<"Thank You!"<<endl;
//         break;
//     }
        
//     int marks;  // declaration

//     cout<<"Enter Marks : ";

//     cin>>marks; // user input

//     if(marks >= 90){

//         cout<<"Grade A+"<<endl;
//         cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >= 80 ){
//         cout<<"Grade A"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >=70 ){
//         cout<<"Grade B+"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >=60 ){
//         cout<<"Grade B"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >=50 ){
//         cout<<"Grade C"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else{
//         cout<<"Sorry, You are failed!"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
// }
  
// }



// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int num;

// //     cout<<"Enter number : ";
// //     cin>>num;

// //     if(num%2 == 0){
// //         cout<<"Even Number"<<endl;
// //     }else{
// //         cout<<"Odd Number"<<endl;
// //     }
// // }


// // #include<iostream>
// // #define PI 3.14
// // using namespace std;

// // int main(){
// //     float r;

// //     cout<<"Enter Radius : ";
// //     cin>>r;

// //     float area = PI*r*r;

// //     cout<<"Area : "<<area<<endl;
// // }




// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     if(num>0){
//         cout<<"Positive number"<<endl;
//     }
//     else if(num<0){
//         cout<<"Negative Number"<<endl;
//     }
//     else{
//         cout<<"Number is neither postive nor negative!"<<endl;
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){

//     for(int num = 1; num <=100; num++){

//         cout<<num<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int num;

//     for(num = 1; num <=100; ){

//         cout<<num<<endl;
//         num++;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num;

//     for(num = 1; num <=100;  num++ ){

//        if(num%2 == 0){
//         cout<<num<<" ";
//        }
      
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int num;

//     for(num = 1; num <=10;  num++ ){

//    cout<<num*5<<" ";
      
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num;

//     int sum = 0;

//     for(num = 1; num <=10;  num++ ){

//         sum += num;
      
//     }

//     cout<<sum<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int count = 0;

//     for(int i= 1; i <=num;  i++ ){

//        if(num%i == 0){
//         count++;
//        }
//     }

//     cout<<"Count : "<<count<<endl;

//     if(count == 2){
//         cout<<"Prime Number!"<<endl;
//     }else{
//         cout<<"Not Prime!"<<endl;
//     }
 
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int count = 0;

//     for(int i= 10; i <=50;  i++ ){

//        if(num%i == 0){
//         count++;
//        }
//     }

//     cout<<"Count : "<<count<<endl;

//     if(count == 2){
//         cout<<"Prime Number!"<<endl;
//     }else{
//         cout<<"Not Prime!"<<endl;
//     }
 
// }



// #include<iostream>
// using namespace std;

// int main(){
    
//     int start = 10;

//     int end = 50;

//     for(int num = start; num <= end; num++){

//         int count = 0;

//         for(int i = 1; i <= num; i++){
//             if(num%i == 0){
//                 count++;
//             }

//         }

//         if(count == 2){
//             cout<<num<<" ";
//         }
//     }
 
// }


// https://docs.google.com/document/d/1XmOiyG5NNIfABevn_JaQmVhrsm0sKcfrLvvuMMRpilM/edit?tab=t.0
// https://docs.google.com/document/d/10NIshP7B5OQYyj-4cA0h8BZXG7lI8TTikSXPmAUPbro/edit?tab=t.0
// https://docs.google.com/document/d/1vKs9-xy7p1kwBWIuwGG07UpYmBLQ99c27sBUQttPkIU/edit?tab=t.0
// https://docs.google.com/document/d/1HvwXUWROYR48OHpzie5tSkydMgjky4EOKa_fBBpF7KE/edit?tab=t.0
// https://docs.google.com/document/d/12Z2MvM7MUl-83QiTDiAIuDGmMH5IqxwIPSBgc3tPlU4/edit?tab=t.0
// https://docs.google.com/document/d/1cxDQpfli5MGsr4gXeQOxiEf7SISwzgPX-ckd3KbOoBQ/edit?tab=t.0
// https://docs.google.com/document/d/1IX_ft5lBKzWbyKK3oMOHPlSkTIB7ZxvAavCOy9qzh8U/edit?tab=t.0
// https://docs.google.com/document/d/1pgx_VqBkWJrCGH11bA6nCRO6gZKMwCQDQvEkhXz-V9M/edit?tab=t.0
// https://docs.google.com/document/d/1qPA8fkQ00KiHyW7L-yK3LgfytwwkyPbdxSIi6L5MHA0/edit?tab=t.0
// https://docs.google.com/document/d/1elYJ0XEK5WBhFftZy64DY1jAqoIUsdjUi7_b-KcFFEM/edit?tab=t.0
// https://docs.google.com/document/d/1hVNsAndhj72jxGtONec8GYnJmUsA8fYGg0ypp1dkpic/edit?tab=t.0
// https://docs.google.com/document/d/1hVNsAndhj72jxGtONec8GYnJmUsA8fYGg0ypp1dkpic/edit?tab=t.0
// https://docs.google.com/document/d/1J40gOtzk2Pi9cZjudQJl4Bsz2YOohzTgg1LnMWctVjA/edit?tab=t.0
// https://docs.google.com/document/d/1CKCYpVt_fkgKtXxVFa_iWAJN6JI3hB2S4bcK2T-Kjt8/edit?tab=t.0

// #include<iostream>
// using namespace std;

// int main(){
//     int year;
//     cout<<"Enter year : ";
//     cin>>year;

//     if((year%400 == 0) || (year%4 == 0 && year%100 !=  0)){
//         cout<<"Leap year!"<<endl;;
//     }else{
//         cout<<"Not Leap Year"<<endl;
//     }
// }

// Prime number within a given range

// #include<iostream>
// using namespace std;

// int main(){
//     int year;
//     cout<<"Enter year : ";
//     cin>>year;

//     if((year%400 == 0) || (year%4 == 0 && year%100 !=  0)){
//         cout<<"Leap year!"<<endl;;
//     }else{
//         cout<<"Not Leap Year"<<endl;
//     }
// }


// function

// #include<iostream>
// using namespace std;
// // parameter in function 
// int addition(int num1, int num2){   // funtion definition

//     // block
// }

// int main(){      // function definition

// // argument
// addition(10,20)

// return 0;
// }


// #include<iostream>
// using namespace std;
// // parameter in function 
// int addition(int num1, int num2){   // funtion definition

//     cout<<"Num1 : "<<num1<<endl;  //10
//     cout<<"Num2 : "<<num2<<endl;  //20

//     // block
// }

// int main(){      // function definition

// // argument
// addition(10,20);  // function call

// return 0;
// }

// #include<iostream>
// using namespace std;
// // parameter in function 
// int addition(){   // funtion definition

//     int num1 = 10;
//     int num2 = 20;

//     cout<<"Num1 : "<<num1<<endl;  //10
//     cout<<"Num2 : "<<num2<<endl;  //20

//     // block
// }

// int main(){      // function definition

// // argument
// // addition(10,20);  // function call


// return 0;
// }

// Type 1 : take nothing and return nothing

// #include<iostream>
// using namespace std;
// // parameter in function 
// int addition(){   // funtion definition

//     int num1 = 10;
//     int num2 = 20;

//     cout<<"Num1 : "<<num1<<endl;  //10
//     cout<<"Num2 : "<<num2<<endl;  //20

//     // block
// }

// int main(){      // function definition

// // argument
// // addition(10,20);  // function call

// addition();

// return 0;
// }

// #include<iostream>
// using namespace std;
// // parameter in function 
// int addition(){   // funtion definition

//     int num1 = 10;
//     int num2 = 20;

//     return num1+num2;

//     // block
// }

// int main(){      // function definition

// // argument
// // addition(10,20);  // function call

// int result = addition();

// cout<<"Result : "<<result<<endl;

// return 0;
// }

// #include<iostream>
// using namespace std;
// // parameter in function 
// void addition(){   // funtion definition

//     int num1 = 10;
//     int num2 = 20;

//     cout<<num1<<endl;
//     cout<<num2<<endl;

//     // return num1+num2;

//     // block
// }

// int main(){      // function definition

// // argument
// // addition(10,20);  // function call

// // int result = addition();

// // cout<<"Result : "<<result<<endl;

// addition();

// return 0;
// }

// #include<iostream>
// using namespace std;

// void addition(double num1, double num2){ 

// cout<<num1+num2<<endl;
  
// }

// int main(){

//     addition(12.4,9.3);     

// }

// #include<iostream>
// using namespace std;

// int addition(double num1, double num2){ 

//     return num1+num2;   // int
  
// }

// int main(){

//  double result =  addition(12.4,9.3); 

//  cout<<"Result : "<<result<<endl;    

// }

// #include<iostream>
// using namespace std;

// double addition(double num1, double num2){ 

//     return num1+num2;   // double
  
// }

// int main(){

//  double result =  addition(12.4,9.3); 

//  cout<<"Result : "<<result<<endl;    

// }


// Take something and return something

// #include<iostream>
// using namespace std;

// float addition(double num1, double num2){ 

//     return num1+num2;   // float
  
// }

// int main(){

//  double result =  addition(12.4,9.3); 

//  cout<<"Result : "<<result<<endl;    

// }


// #include<iostream>
// #include<string>
// using namespace std;


// int main(){
//     int num1;
//     cout<<"Enter Num1 : ";
//     cin>>num1;
//     int num2;
//     cout<<"Enter Num2 : ";
//     cin>>num2;

//     char exp;
//     cout<<"Enter Operator : ";
//     cin>>exp;

//     switch(exp){

//         case '+' : 
//             cout<<"Addition : "<<num1+num2<<endl;
//             break;
//         case '-' : 
//             cout<<"Subtraction : "<<num1-num2<<endl;
//             break;
//         case '*' : 
//             cout<<"Multiplication : "<<num1*num2<<endl;
//             break;
//         case '/' : 
//             cout<<"Divide : "<<num1/num2<<endl;
//             break;
//         case '%' : 
//             cout<<"Remainder : "<<num1%num2<<endl;
//             break;

//         default : 
//         cout<<"Please enter correct operator!"<<endl;

//     }
// }


// #include<iostream>
// using namespace std;
// int main(){

//    char choice = 'y';

   
//    while(choice == 'y' || choice == 'Y' ){
   
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int count = 0;
//       cout<<"Factor : ";
//     for(int i = 1; i <= num; i++){
//         if(num%i == 0){
//             cout<<i<<" ";
//             count++;
//         }
//     }

//   cout<<"\nCount : "<<count<<endl;
//     if(count == 2){
//         cout<<"\nPrime Number!";
//     }else{
//         cout<<"\nNot prime number!";
//     }

//     cout<<"\nAre you want to try next (y/n) : ";
//     cin>>choice;
    
//    }
// }

// Prime number within a given range

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     if(num>0){
//         cout<<"Positive number"<<endl;
//     }
//     else if(num<0){
//         cout<<"Negative Number"<<endl;
//     }
//     else{
//         cout<<"Number is neither postive nor negative!"<<endl;
//     }
// }





// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     if(num>0){
//         cout<<"Positive number"<<endl;
//     }
//     else if(num<0){
//         cout<<"Negative Number"<<endl;
//     }
//     else{
//         cout<<"Number is neither postive nor negative!"<<endl;
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){

//     for(int num = 1; num <=100; num++){

//         cout<<num<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int num;

//     for(num = 1; num <=100; ){

//         cout<<num<<endl;
//         num++;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num;

//     for(num = 1; num <=100;  num++ ){

//        if(num%2 == 0){
//         cout<<num<<" ";
//        }
      
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int num;

//     for(num = 1; num <=10;  num++ ){

//    cout<<num*5<<" ";
      
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num;

//     int sum = 0;

//     for(num = 1; num <=10;  num++ ){

//         sum += num;
      
//     }

//     cout<<sum<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int count = 0;

//     for(int i= 1; i <=num;  i++ ){

//        if(num%i == 0){
//         count++;
//        }
//     }

//     cout<<"Count : "<<count<<endl;

//     if(count == 2){
//         cout<<"Prime Number!"<<endl;
//     }else{
//         cout<<"Not Prime!"<<endl;
//     }
 
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int count = 0;

//     for(int i= 10; i <=50;  i++ ){

//        if(num%i == 0){
//         count++;
//        }
//     }

//     cout<<"Count : "<<count<<endl;

//     if(count == 2){
//         cout<<"Prime Number!"<<endl;
//     }else{
//         cout<<"Not Prime!"<<endl;
//     }
 
// }



// #include<iostream>
// using namespace std;

// int main(){
    
//     int start = 10;

//     int end = 50;

//     for(int num = start; num <= end; num++){

//         int count = 0;

//         for(int i = 1; i <= num; i++){
//             if(num%i == 0){
//                 count++;
//             }

//         }

//         if(count == 2){
//             cout<<num<<" ";
//         }
//     }
 
// }

// 18-12-2024

// Github repo : https://github.com/Pawan2505/DSA-WEB-11AM.git
// Online Compiler : https://ide.codingblocks.com/
//  Today HW : https://docs.google.com/document/d/1XmOiyG5NNIfABevn_JaQmVhrsm0sKcfrLvvuMMRpilM/edit?tab=t.0


// #include<iostream>
// using namespace std;

// int main(){

//     cout<<"Hello Good Class!";

// }



// Keyword : https://www.geeksforgeeks.org/cpp-keywords/


// #include<iostream>
// using namespace std;

// int main(){

//     // int 12num = 10;  // Not Ok
//     // int num12 = 10; // ok
//     // int num value = 10; // Not Ok
//     // int num_value = 10; //  Ok
//     // int _value = 10; //  Ok
//     // int $value = 10; //  Ok
//     // int @value = 10; // Not  Ok

//     // int float = 10;  // Not ok 

//     // double djfd = 223.455;

//     // Data Type

//     int num = 10;
//     cout<<num<<endl;

//     float num1 = 20.356f;
//     cout<<num1<<endl;

//     double num2 = 234.567987654f;
//     cout<<num2<<endl;

//     string str = "Pawan Maurya";

//     cout<<str<<endl;

//     char ch = 'a';

//     cout<<ch<<endl;

//     bool value = false;

//     cout<<value<<endl;


// }



// Constant :  1. micro, 2. const

// micro

// #include<iostream>
// using namespace std;
// #define num "Pawan Maurya"   // gloable variable
// int main(){

// num = "Pooja"; // Not Ok

// cout<<num<<endl;
// }

// #include<iostream>
// using namespace std;
// #define x 10
// #define y 20
// int main(){

// cout<<x+y<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){

// const int num = 10;

// num = 20;  // Not Ok

// cout<<num<<endl; 
// }





// #include<iostream>
// using namespace std;

// int main(){

// const int num = 10;

// num = 20;  // Not Ok

// cout<<num<<endl; 

// }


// #include<iostream>
// using namespace std;

// int main(){

// const int num;

// cout<<"Please enter number : "<<endl;

// cin>>num;

// cout<<num<<endl; 

// }


// Block scope


// #include<iostream>
// using namespace std;

// int main(){

//     int num = 10;  // global variable / local variable
//     cout<<"Num1 : "<<num<<endl; //10

//     {
//         // int num = 20; // local variable
//         cout<<"Num2 : "<<num<<endl;  //20
//     }
    
//     cout<<"Num3 : "<<num<<endl; //10
// }



// #include<iostream>
// // using namespace std;

// namespace na{
//     int a = 100;
// }
// namespace nb{
//     int a = 200;
// }

// int a = 60;  // global variable

// int main(){

//     std::cout<<nc::a<<std::endl;

//     int a = 10;

//     std::cout<<a<<std::endl;   // 10

//     {
//         int a = 20;
//         std::cout<<a<<std::endl;  //20
//     }

//     a = 60;
//     std::cout<<a<<std::endl;  //10

//     std::cout<<::a<<std::endl;  //:: ->  scope resulation operator
//     std::cout<<na::a<<std::endl;  //:: ->  scope resulation operator
//     std::cout<<nb::a<<std::endl;  //:: ->  scope resulation operator

//     return 0;
// }


// #include<iostream>

// int main(){

// using namespace std;

// int a = 10;

// cout<<a<<endl;

// }


// #include<iostream>

// int main(){

// using namespace std;

// int a = 10;

// cout<<a<<endl;

// }


// Operator :  Uniary Operator

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     a++;

//     cout<<a<<endl;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     ++a;

//     cout<<a<<endl;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     a--;

//     cout<<a<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;

//     --a;

//     cout<<a<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<"Addition : "<<(a+b)<<endl;
//     cout<<"Multiply : "<<(a*b)<<endl;
//     cout<<"sub :  : "<<(a-b)<<endl;
//     cout<<"Divide : "<<(a/b)<<endl;
//     cout<<"Remainder : "<<(a%b)<<endl;
// }


//  Arithmetic Operator

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<"Addition : "<<(a+b)<<endl;
//     cout<<"Multiply : "<<(a*b)<<endl;
//     cout<<"sub :  : "<<(a-b)<<endl;
//     cout<<"Divide : "<<(a/b)<<endl;
//     cout<<"Remainder : "<<(a%b)<<endl;
// }


// Conditional Statement

// #include<iostream>
// using namespace std;

// int main(){
//     int fatima_age = 19;
//     int khushi_age = 20;

//     if(fatima_age>khushi_age){

//         cout<<"Fatima age greater than Khushi"<<endl;
//     }else{
//         cout<<"Khushi age greater than fatima"<<endl;
//     }
// }


// Else if 


// #include<iostream>
// using namespace std;

// int main(){

// char choice;

// while(choice == 'y' || 'Y'){

//     if(choice == 'n'){
//         cout<<"Thank You!"<<endl;
//         break;
//     }
        
//     int marks;  // declaration

//     cout<<"Enter Marks : ";

//     cin>>marks; // user input

//     if(marks >= 90){

//         cout<<"Grade A+"<<endl;
//         cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >= 80 ){
//         cout<<"Grade A"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >=70 ){
//         cout<<"Grade B+"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >=60 ){
//         cout<<"Grade B"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >=50 ){
//         cout<<"Grade C"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else{
//         cout<<"Sorry, You are failed!"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
// }
  
// }


// Relation Operator

// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;
//     int b = 20;

//     cout<<(a == b)<<endl;  // 0
//     cout<<(a != b)<<endl;  // 1
//     cout<<(a >= b)<<endl;  // 0
//     cout<<(a <= b)<<endl;  // 1 
//     cout<<(a > b)<<endl;  // 0
//     cout<<(a < b)<<endl; // 1
// }


// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;
//     int b = 20;
//     int c =30;

//     cout<<( a < b && b > c)<<endl;  // 0
//     cout<<((a!=b) && (c>a))<<endl;  // 1
//     cout<<((a>=b) && (b>a))<<endl;  // 0
//     cout<<((a<=b) && (b>c))<<endl;  // 0
//     cout<<((a>b) && (c>a))<<endl;  // 0
//     cout<<((a<b) && (a<=c)) <<endl; // 1
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;
//     int b = 20;
//     int c =30;

//     cout<<!( a == b || b > c)<<endl;  // 1
//     cout<<!((a!=b) || (c>a))<<endl;  // 0
//     cout<<!((a>=b) || (b>a))<<endl;  // 0
//     cout<<!((a<=b) || (b>c))<<endl;  // 0
//     cout<<!((a>b) || (c>a))<<endl;  // 0
//     cout<<!((a<b) || (a<=c)) <<endl; // 0
// }
// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;
//     int b = 5;

//     cout<<(a^b)<<endl;

// }
// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;

//     cout<<(a>>2)<<endl;

// }

// #include<iostream>
// using namespace std;

// int main(){

//     int a = 5;
//     int b = 10;

//     cout<<(a%b)<<endl;

// }


// #include<iostream>
// using namespace std;

// int main(){

//     int a = 5;
  
//   //  a = a + 10;

//     a += 10;

//     cout<<a<<endl;

// }



// #include<iostream>
// using namespace std;

// int main(){

//     int a = 5;
  
//   //  a = a + 10;

//     a += 10;

//     cout<<a<<endl;

// }


// #include<iostream>
// using namespace std;

// int main(){

//     int a = 50;
  
//     int b = 100;

//     int c=30;
//    (a>b && a>c)?  cout<<"a is greater" : (b>a && b>c)?  cout<<"b is greater":  cout<<"c is greater";

// }



// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<"Addition : "<<(a+b)<<endl;
//     cout<<"Multiply : "<<(a*b)<<endl;
//     cout<<"sub :  : "<<(a-b)<<endl;
//     cout<<"Divide : "<<(a/b)<<endl;
//     cout<<"Remainder : "<<(a%b)<<endl;
// }


//  Arithmetic Operator

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<"Addition : "<<(a+b)<<endl;
//     cout<<"Multiply : "<<(a*b)<<endl;
//     cout<<"sub :  : "<<(a-b)<<endl;
//     cout<<"Divide : "<<(a/b)<<endl;
//     cout<<"Remainder : "<<(a%b)<<endl;
// }


// Conditional Statement

// #include<iostream>
// using namespace std;

// int main(){
//     int fatima_age = 19;
//     int khushi_age = 20;

//     if(fatima_age>khushi_age){

//         cout<<"Fatima age greater than Khushi"<<endl;
//     }else{
//         cout<<"Khushi age greater than fatima"<<endl;
//     }
// }


// Else if 


// #include<iostream>
// using namespace std;

// int main(){

// char choice;

// while(choice == 'y' || 'Y'){

//     if(choice == 'n'){
//         cout<<"Thank You!"<<endl;
//         break;
//     }
        
//     int marks;  // declaration

//     cout<<"Enter Marks : ";

//     cin>>marks; // user input

//     if(marks >= 90){

//         cout<<"Grade A+"<<endl;
//         cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >= 80 ){
//         cout<<"Grade A"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >=70 ){
//         cout<<"Grade B+"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >=60 ){
//         cout<<"Grade B"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else if(marks >=50 ){
//         cout<<"Grade C"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
//     else{
//         cout<<"Sorry, You are failed!"<<endl;
//          cout<<"Are you want to try next (y/n) : ";
//         cin>>choice;
//     }
// }
  
// }



// // #include<iostream>
// // using namespace std;

// // int main(){
// //     int num;

// //     cout<<"Enter number : ";
// //     cin>>num;

// //     if(num%2 == 0){
// //         cout<<"Even Number"<<endl;
// //     }else{
// //         cout<<"Odd Number"<<endl;
// //     }
// // }


// // #include<iostream>
// // #define PI 3.14
// // using namespace std;

// // int main(){
// //     float r;

// //     cout<<"Enter Radius : ";
// //     cin>>r;

// //     float area = PI*r*r;

// //     cout<<"Area : "<<area<<endl;
// // }




// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     if(num>0){
//         cout<<"Positive number"<<endl;
//     }
//     else if(num<0){
//         cout<<"Negative Number"<<endl;
//     }
//     else{
//         cout<<"Number is neither postive nor negative!"<<endl;
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){

//     for(int num = 1; num <=100; num++){

//         cout<<num<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int num;

//     for(num = 1; num <=100; ){

//         cout<<num<<endl;
//         num++;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num;

//     for(num = 1; num <=100;  num++ ){

//        if(num%2 == 0){
//         cout<<num<<" ";
//        }
      
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int num;

//     for(num = 1; num <=10;  num++ ){

//    cout<<num*5<<" ";
      
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num;

//     int sum = 0;

//     for(num = 1; num <=10;  num++ ){

//         sum += num;
      
//     }

//     cout<<sum<<endl;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int count = 0;

//     for(int i= 1; i <=num;  i++ ){

//        if(num%i == 0){
//         count++;
//        }
//     }

//     cout<<"Count : "<<count<<endl;

//     if(count == 2){
//         cout<<"Prime Number!"<<endl;
//     }else{
//         cout<<"Not Prime!"<<endl;
//     }
 
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int count = 0;

//     for(int i= 10; i <=50;  i++ ){

//        if(num%i == 0){
//         count++;
//        }
//     }

//     cout<<"Count : "<<count<<endl;

//     if(count == 2){
//         cout<<"Prime Number!"<<endl;
//     }else{
//         cout<<"Not Prime!"<<endl;
//     }
 
// }



// #include<iostream>
// using namespace std;

// int main(){
    
//     int start = 10;

//     int end = 50;

//     for(int num = start; num <= end; num++){

//         int count = 0;

//         for(int i = 1; i <= num; i++){
//             if(num%i == 0){
//                 count++;
//             }

//         }

//         if(count == 2){
//             cout<<num<<" ";
//         }
//     }
 
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num = 1;

//     while(num<=10){
//         cout<<num<<endl;
//         num++;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num = 10;

//     while(num>=1){
//         cout<<num<<endl;
//         num--;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int num = 10;

//     int sum = 0;
//     while(num>=1){
//        sum += num;
//         num--;
//     }

//     cout<<sum;
// }


// https://docs.google.com/document/d/1XmOiyG5NNIfABevn_JaQmVhrsm0sKcfrLvvuMMRpilM/edit?tab=t.0
// https://docs.google.com/document/d/10NIshP7B5OQYyj-4cA0h8BZXG7lI8TTikSXPmAUPbro/edit?tab=t.0
// https://docs.google.com/document/d/1vKs9-xy7p1kwBWIuwGG07UpYmBLQ99c27sBUQttPkIU/edit?tab=t.0
// https://docs.google.com/document/d/1HvwXUWROYR48OHpzie5tSkydMgjky4EOKa_fBBpF7KE/edit?tab=t.0
// https://docs.google.com/document/d/12Z2MvM7MUl-83QiTDiAIuDGmMH5IqxwIPSBgc3tPlU4/edit?tab=t.0
// https://docs.google.com/document/d/1cxDQpfli5MGsr4gXeQOxiEf7SISwzgPX-ckd3KbOoBQ/edit?tab=t.0
// https://docs.google.com/document/d/1IX_ft5lBKzWbyKK3oMOHPlSkTIB7ZxvAavCOy9qzh8U/edit?tab=t.0
// https://docs.google.com/document/d/1pgx_VqBkWJrCGH11bA6nCRO6gZKMwCQDQvEkhXz-V9M/edit?tab=t.0
// https://docs.google.com/document/d/1qPA8fkQ00KiHyW7L-yK3LgfytwwkyPbdxSIi6L5MHA0/edit?tab=t.0
// https://docs.google.com/document/d/1elYJ0XEK5WBhFftZy64DY1jAqoIUsdjUi7_b-KcFFEM/edit?tab=t.0
// https://docs.google.com/document/d/1hVNsAndhj72jxGtONec8GYnJmUsA8fYGg0ypp1dkpic/edit?tab=t.0
// https://docs.google.com/document/d/1hVNsAndhj72jxGtONec8GYnJmUsA8fYGg0ypp1dkpic/edit?tab=t.0
// https://docs.google.com/document/d/1J40gOtzk2Pi9cZjudQJl4Bsz2YOohzTgg1LnMWctVjA/edit?tab=t.0
// https://docs.google.com/document/d/1CKCYpVt_fkgKtXxVFa_iWAJN6JI3hB2S4bcK2T-Kjt8/edit?tab=t.0

// #include<iostream>
// using namespace std;

// int main(){
//     int year;
//     cout<<"Enter year : ";
//     cin>>year;

//     if((year%400 == 0) || (year%4 == 0 && year%100 !=  0)){
//         cout<<"Leap year!"<<endl;;
//     }else{
//         cout<<"Not Leap Year"<<endl;
//     }
// }

// Prime number within a given range

// #include<iostream>
// using namespace std;

// int main(){
//     int year;
//     cout<<"Enter year : ";
//     cin>>year;

//     if((year%400 == 0) || (year%4 == 0 && year%100 !=  0)){
//         cout<<"Leap year!"<<endl;;
//     }else{
//         cout<<"Not Leap Year"<<endl;
//     }
// }


// function

// #include<iostream>
// using namespace std;
// // parameter in function 
// int addition(int num1, int num2){   // funtion definition

//     // block
// }

// int main(){      // function definition

// // argument
// addition(10,20)

// return 0;
// }


// #include<iostream>
// using namespace std;
// // parameter in function 
// int addition(int num1, int num2){   // funtion definition

//     cout<<"Num1 : "<<num1<<endl;  //10
//     cout<<"Num2 : "<<num2<<endl;  //20

//     // block
// }

// int main(){      // function definition

// // argument
// addition(10,20);  // function call

// return 0;
// }

// #include<iostream>
// using namespace std;
// // parameter in function 
// int addition(){   // funtion definition

//     int num1 = 10;
//     int num2 = 20;

//     cout<<"Num1 : "<<num1<<endl;  //10
//     cout<<"Num2 : "<<num2<<endl;  //20

//     // block
// }

// int main(){      // function definition

// // argument
// // addition(10,20);  // function call


// return 0;
// }

// Type 1 : take nothing and return nothing

// #include<iostream>
// using namespace std;
// // parameter in function 
// int addition(){   // funtion definition

//     int num1 = 10;
//     int num2 = 20;

//     cout<<"Num1 : "<<num1<<endl;  //10
//     cout<<"Num2 : "<<num2<<endl;  //20

//     // block
// }

// int main(){      // function definition

// // argument
// // addition(10,20);  // function call

// addition();

// return 0;
// }

// #include<iostream>
// using namespace std;
// // parameter in function 
// int addition(){   // funtion definition

//     int num1 = 10;
//     int num2 = 20;

//     return num1+num2;

//     // block
// }

// int main(){      // function definition

// // argument
// // addition(10,20);  // function call

// int result = addition();

// cout<<"Result : "<<result<<endl;

// return 0;
// }

// #include<iostream>
// using namespace std;
// // parameter in function 
// void addition(){   // funtion definition

//     int num1 = 10;
//     int num2 = 20;

//     cout<<num1<<endl;
//     cout<<num2<<endl;

//     // return num1+num2;

//     // block
// }

// int main(){      // function definition

// // argument
// // addition(10,20);  // function call

// // int result = addition();

// // cout<<"Result : "<<result<<endl;

// addition();

// return 0;
// }

// #include<iostream>
// using namespace std;

// void addition(double num1, double num2){ 

// cout<<num1+num2<<endl;
  
// }

// int main(){

//     addition(12.4,9.3);     

// }

// #include<iostream>
// using namespace std;

// int addition(double num1, double num2){ 

//     return num1+num2;   // int
  
// }

// int main(){

//  double result =  addition(12.4,9.3); 

//  cout<<"Result : "<<result<<endl;    

// }

// #include<iostream>
// using namespace std;

// double addition(double num1, double num2){ 

//     return num1+num2;   // double
  
// }

// int main(){

//  double result =  addition(12.4,9.3); 

//  cout<<"Result : "<<result<<endl;    

// }


// Take something and return something

// #include<iostream>
// using namespace std;
// <<<<<<< HEAD
// int main(){

//    char choice = 'y';

   
//    while(choice == 'y' || choice == 'Y' ){
   
//    int start;
//    cout<<"Enter Start Number :";
//    cin>>start;
//    int end;
//    cout<<"Enter end number : ";
//    cin>>end;


//     for(int num = start; num<=end; num++){

//         int count = 0;

//         for(int i = 1; i <= num; i++){

//             if(num%i == 0){
//                 count++;
//             }
//         }

//         if(count == 2){
//             cout<<num<<" ";
//         }
//     }

//     cout<<"\nAre you want to try next (y/n) : ";
//     cin>>choice;
    
//    }
// =======

// float addition(double num1, double num2){ 

//     return num1+num2;   // float
  
// }

// int main(){

//  double result =  addition(12.4,9.3); 

//  cout<<"Result : "<<result<<endl;    

// >>>>>>> f6cfb53 (function)
// }




// #include<iostream>
// #include<string>
// using namespace std;


// int main(){
//     int num1;
//     cout<<"Enter Num1 : ";
//     cin>>num1;
//     int num2;
//     cout<<"Enter Num2 : ";
//     cin>>num2;

//     char exp;
//     cout<<"Enter Operator : ";
//     cin>>exp;

//     switch(exp){

//         case '+' : 
//             cout<<"Addition : "<<num1+num2<<endl;
//             break;
//         case '-' : 
//             cout<<"Subtraction : "<<num1-num2<<endl;
//             break;
//         case '*' : 
//             cout<<"Multiplication : "<<num1*num2<<endl;
//             break;
//         case '/' : 
//             cout<<"Divide : "<<num1/num2<<endl;
//             break;
//         case '%' : 
//             cout<<"Remainder : "<<num1%num2<<endl;
//             break;

//         default : 
//         cout<<"Please enter correct operator!"<<endl;

//     }
// }


// #include<iostream>
// using namespace std;
// int main(){

//    char choice = 'y';

   
//    while(choice == 'y' || choice == 'Y' ){
   
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int count = 0;
//       cout<<"Factor : ";
//     for(int i = 1; i <= num; i++){
//         if(num%i == 0){
//             cout<<i<<" ";
//             count++;
//         }
//     }

//   cout<<"\nCount : "<<count<<endl;
//     if(count == 2){
//         cout<<"\nPrime Number!";
//     }else{
//         cout<<"\nNot prime number!";
//     }

//     cout<<"\nAre you want to try next (y/n) : ";
//     cin>>choice;
    
//    }
// }

// Prime number within a given range

// #include<iostream>
// using namespace std;
// int main(){

//    char choice = 'y';

   
//    while(choice == 'y' || choice == 'Y' ){
   
//    int start;
//    cout<<"Enter Start Number :";
//    cin>>start;
//    int end;
//    cout<<"Enter end number : ";
//    cin>>end;


//     for(int num = start; num<=end; num++){

//         int count = 0;

//         for(int i = 1; i <= num; i++){

//             if(num%i == 0){
//                 count++;
//             }
//         }

//         if(count == 2){
//             cout<<num<<" ";
//         }
//     }

//     cout<<"\nAre you want to try next (y/n) : ";
//     cin>>choice;
    
//    }
// }




//  Pattern


// #include<iostream>
// using namespace std;

// int main(){

//     // outer loop -> row
//     for(int row = 1; row <= 4; row++){

//         // inner loop -> cols

//         for(int col = 1; col<=4; col++){

//             cout<<"*";
//         }

//         cout<<endl;

//     }
// }


// #include<iostream>
// using namespace std;

// int main(){

//     // outer loop -> row
//     for(int row = 1; row <= 4; row++){

//         // inner loop -> cols

//         for(int col = 1; col<=4; col++){

//             if((row == 2 || row == 3) && (col == 2 || col == 3)){
//                 cout<<" ";
//             }else{
//                 cout<<"*";
//             }
//         }

//         cout<<endl;

//     }
// }

// #include<iostream>
// using namespace std;

// int main(){

//     // outer loop -> row
//     for(int row = 1; row <= 4; row++){


//         // space 

//         for(int space = 1; space < row; space++){
//             cout<<" ";
//         }

//         // star

//         for(int star = 1; star<=4; star++){

//         cout<<"*";
         
//         }

//         cout<<endl;

//     }
// }



// #include<iostream>
// using namespace std;

// int main(){

//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int sum = 0;

//     while(num>0){

//         int digit = num%10;  // last digit  186%10 => 6  , 18%10  => 8, 1%10=> 1

//         sum += digit;  // 0 +6 +8 +1

//         num = num/10;  // last digit remove  186/10 => 18, 18/10 => 1, 1/10 => 0

//     }

//     cout<<"Sum : "<<sum<<endl;

// }




// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int rev = 0;

//     while(num>0){
//         int digit = num%10;

//         rev = rev*10 + digit;

//         num = num/10;
//     }

//     cout<<"Reverse : "<<rev<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int temp = num;

//     int rev = 0;

//     while(num>0){
//         int digit = num%10;

//         rev = rev*10 + digit;

//         num = num/10;
//     }

//    if(temp == rev){
//     cout<<"Palindrome Number!"<<endl;
//    }else{
//     cout<<"Not Palindrome Number!"<<endl;
//    }
// }


// #include<iostream>

// using namespace std;

// int main(){

//          // row
//     for(int row = 1; row <= 4; row++){

//         // space

//         for(int space = 1; space <= 4-row; space++){
//             cout<<" ";
//         }

//         // star

//         for(int star = 1; star <= 4; star++){
//             cout<<"*";
//         }

//         cout<<endl;

//     }
// }



// #include<iostream>

// using namespace std;

// int main(){

//          // row
//      for(int row = 1; row <= 4; row++){

//         // star

//         for(int star = 1; star <= row; star++){
//             cout<<"*";
//         }

//         cout<<endl;

//     }
// }


// #include<iostream>
// using namespace std;
// int main(){

//     //row

//     for (int i =1; i<=4;i++){

//         // space
//         for(int j=1; j<=4-i; j++){
//             cout<<" ";
//         }

//         //star

//         for(int j=1; j<=2*i-1; j++){
//                 cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// #include<iostream>
// #include<math.h>
// using namespace std;

// int countValue(int num){

//     int count = 0;

//     while(num>0){

//         num = num/10;

//         count++;

//     }

//     return count;


// }

// int main(){

//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//    int power =  countValue(num);

//    cout<<"Power : "<<power<<endl;

//     int original = num;

//    int sum = 0;

//    while(num>0){
//     int digit = num%10;

//     sum += pow(digit,power);

//     num = num/10;
//    }

//     if(original == sum){
//         cout<<"Armstrong Number!"<<endl;
//     }else{
//         cout<<"Sorry, Not Armstrong Number!"<<endl;
//     }

// }


// Fibonacci Series upto nth term

// #include<iostream>
// using namespace std;

// int main(){

//     int n1 = 0;
//     cout<<n1<<" ";
//     int n2 = 1;
//     cout<<n2<<" ";

//     for(int i = 2; i < 10; i++){
//       int  n3 = n1 + n2;
//       cout<<n3<<" ";
//       n1 = n2;
//       n2 = n3;
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){

//   for(int row = 1; row<=4; row++){
//     for(int col = 1; col <= 4; col++){
//       cout<<"1";
//     }
//       cout<<endl;
//   }

// }

// #include<iostream>
// using namespace std;

// int main(){

//   int num = 1;

//   for(int row = 1; row<=4; row++){
//     for(int col = 1; col <= 4; col++){
//       cout<<num;
//     }
//       cout<<endl;
//   }

// }

// #include<iostream>
// using namespace std;

// int main(){

 
//   for(int row = 1; row<=4; row++){
//     for(int col = 1; col <= 4; col++){
//       cout<<row;
//     }
//       cout<<endl;
//   }

// }



// #include<iostream>
// using namespace std;

// int main(){

 
//   for(int row = 1; row<=4; row++){
//     for(int col = 1; col <= 3; col++){
      
//       if(row == 2 && col == 2){
//         cout<<"1";
//       }
//       else if(row == 3 && col == 2){
//         cout<<"2";
//       }
//       else{
//         cout<<"3";
//       }
//     }
//       cout<<endl;
//   }

// }


// #include<iostream>
// using namespace std;

// int main(){

 
//   for(int row = 1; row<=4; row++){
//     for(int col = 1; col <= 3; col++){
      
//       if(row == 2 && col == 2){
//         cout<<"1";
//       }
//       else if(row == 3 && col == 2){
//         cout<<"2";
//       }
//       else{
//         cout<<"3";
//       }
//     }
//       cout<<endl;
//   }

// }


// #include<iostream>
// using namespace std;

// int main(){

 
//   for(int row = 1; row<=4; row++){
//     for(int col = 1; col <= 3; col++){
      
//       if(row == 2 && col == 2){
//         cout<<"1";
//       }
//       else if(row == 3 && col == 2){
//         cout<<"2";
//       }
//       else{
//         cout<<"3";
//       }
//     }
//       cout<<endl;
//   }

// }


// #include<iostream>
// using namespace std;

// int main(){

//  int num = 1;
//   for(int row = 1; row<=4; row++){
//     for(int col = 1; col <= row; col++){
//       cout<<num++;
//     }
//       cout<<endl;
//   }

// }



// #include<iostream>
// using namespace std;

// int main(){

//   for(int row = 1; row <=4; row++){
//     //space

//     for(int space = 1; space <= 4-row; space++){
//       cout<<" ";
//     }

//     //triangle

//     for(int triangle = 1; triangle<= 2*row-1; triangle++){
//       if(row == 4){
//         cout<<"*";
//       }else{
//         if(triangle == 1 || triangle == 2*row-1){
//           cout<<"*";
//         }else{
//           cout<<" ";
//         }
//       }
    
//     }       

//     cout<<endl;

//   }
// }

// #include<iostream>
// using namespace std;

// int main(){

//   for(int row = 1; row <=4; row++){
//     //space

//     for(int space = 1; space <= row-1; space++){
//       cout<<" ";
//     }

//     //triangle

//     for(int triangle = 7; triangle>= 2*row -1; triangle--){
//       cout<<"*";
//     }       

//     cout<<endl;

//   }
// }



// https://medium.com/@yhmyown/data-types-in-c-a58d8eef1cb8



// #include<iostream>
// using namespace std;

// int main(){

//   int a = 10;

//   wchar_t result = sizeof(a);  // this datatype is used to store size of variable or address or variable

//   cout<<result;
// }


// Byte: A single letter is one byte.
// Kilobyte (KB): One thousand bytes is one kilobyte.
// Megabyte (MB): One thousand kilobytes is one megabyte.
// Gigabyte (GB): One thousand megabytes is one gigabyte.

//Array

// #include<iostream>
// using namespace std;



// int main(){
//   int n = 10;

//   int arr[n];

//   arr[0] = 10;
//   arr[1] = 20;
//   arr[2] = 30;
//   arr[3] = 40;
//   arr[4] = 50;
//   arr[5] = 60;
//   arr[6] = 70;
//   arr[7] = 80;
//   arr[8] = 90;
//   arr[9] = 100;

//   cout<<arr[0]<<endl;
//   cout<<&arr[0]<<endl;
//   cout<<arr[1]<<endl;
//   cout<<&arr[1]<<endl;
//   cout<<arr[2]<<endl;
//   cout<<&arr[2]<<endl;
//   cout<<arr[3]<<endl;
//   cout<<&arr[3]<<endl;
//   cout<<arr[4]<<endl;
//   cout<<&arr[4]<<endl;
//   cout<<arr[5]<<endl;
//   cout<<&arr[5]<<endl;
//   cout<<arr[6]<<endl;
//   cout<<&arr[6]<<endl;
//   cout<<arr[7]<<endl;
//   cout<<&arr[7]<<endl;
//   cout<<arr[8]<<endl;
//   cout<<&arr[8]<<endl;
//   cout<<arr[9]<<endl;
//   cout<<&arr[9]<<endl;





// }

// #include<iostream>
// using namespace std;



// int main(){
//   int n = 10;

//   int arr[n] ={10,20,30,40,50,60,70,80,90,100};



//   cout<<arr[0]<<endl;
//   cout<<&arr[0]<<endl;
//   cout<<arr[1]<<endl;
//   cout<<&arr[1]<<endl;
//   cout<<arr[2]<<endl;
//   cout<<&arr[2]<<endl;
//   cout<<arr[3]<<endl;
//   cout<<&arr[3]<<endl;
//   cout<<arr[4]<<endl;
//   cout<<&arr[4]<<endl;
//   cout<<arr[5]<<endl;
//   cout<<&arr[5]<<endl;
//   cout<<arr[6]<<endl;
//   cout<<&arr[6]<<endl;
//   cout<<arr[7]<<endl;
//   cout<<&arr[7]<<endl;
//   cout<<arr[8]<<endl;
//   cout<<&arr[8]<<endl;
//   cout<<arr[9]<<endl;
//   cout<<&arr[9]<<endl;


// }



// #include<iostream>
// using namespace std;

// int main(){
//   int n = 10;

//   int arr[n] ={10,20,30,40,50,60,70,80,90,100};

//   for(int i = 0; i < n; i++){
//     cout<<"Element present at "<<i<<" index : "<<arr[i]<<endl;
//   }

// }



// #include<iostream>
// using namespace std;

// int main(){

// int n = 6;

// int arr[n];

// for(int i = 0; i < n; i++){
//   cout<<"Enter element at "<<i<<" index : ";  // user help
//   cin>>arr[i];  // user se input liya hai
// }

// // print array

// for(int i = 0; i < n; i++){
//   cout<<"Element present at "<<i<<" index : ";  // user help
//   cout<<arr[i]<<endl;
// }
// }


// #include<iostream>
// using namespace std;

// int main(){

// int n = 6;

// int arr[n];

// for(int i = 0; i < n; i++){
//   cin>>arr[i];  
// }

// // print array

// for(int i = 0; i < n; i++){
//   cout<<arr[i]<<" ";
// }
// }




// #include<iostream>
// using namespace std;

// int main(){

// int arr[] = {10,20,30,40,50,60,70,80,90};


// // sizeof()

// int size = sizeof(arr);

// cout<<size<<endl;

// int length = sizeof(arr)/sizeof(arr[0]);

// cout<<"Length : "<<length<<endl;

// // print array

// for(int i = 0; i < length; i++){
//   cout<<arr[i]<<" ";
// }
// }


// #include<iostream>
// using namespace std;

// int main(){

// int n = 8;

// int arr[n] = {10,20,30,40,50,60,70,60};

// int key = 60;

// for(int i = 0; i < n; i++){
//   if(arr[i] == key){
//     cout<<"Element present in array at "<<i<<" index! "<<endl;
//   }
// }

// }




// #include<iostream>
// #include<math.h>
// using namespace std;

// int countValue(int num){

//     int count = 0;

//     while(num>0){

//         num = num/10;

//         count++;

//     }

//     return count;


// }

// int main(){

//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//    int power =  countValue(num);

//    cout<<"Power : "<<power<<endl;

//     int original = num;

//    int sum = 0;

//    while(num>0){
//     int digit = num%10;

//     sum += pow(digit,power);

//     // sum += digit*digit*digit;

//     num = num/10;
//    }

//     if(original == sum){
//         cout<<"Armstrong Number!"<<endl;
//     }else{
//         cout<<"Sorry, Not Armstrong Number!"<<endl;
//     }

// }



// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {10,20,30,40,50};

//     // forEach()

//     for(int element : arr){
//         cout<<element<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//  int arr[5] = {10,23,30,45,50};

//     // forEach()

//     for(int element : arr){
//         if(element%2 == 0){
//             cout<<element<<" ";
//         }
//     }
// }



// doc : https://www.geeksforgeeks.org/g-fact-40-foreach-in-c-and-java/


// #include<iostream>
// using namespace std;

// int main(){
    
//     cout<<"Integer : "<<sizeof(int)<<endl;
//     cout<<"Double : "<<sizeof(double)<<endl;
//     cout<<"Float : "<<sizeof(float)<<endl;
//     cout<<"Character : "<<sizeof(char)<<endl;
//     cout<<"Boolean : "<<sizeof(bool)<<endl;
//     cout<<"String : "<<sizeof(string)<<endl;

//     int a = 10;

//     cout<<sizeof(a)<<endl;

// }

// #include<iostream>
// using namespace std;

// int main(){
    
//    int arr[5] = {10,2,30,40,50};

//    arr[1] = 20;

//    for(int element : arr){
//     cout<<element<<" ";
//    }

// }


// #include<iostream>
// using namespace std;

// int main(){
    
//    int arr[5] = {10,2,30,40,50};

//     for(int i = 0; i < 5; i++){
//         if(i==1){
//             arr[i] = 20;
//             break;
//         }
//     }

//    for(int element : arr){
//     cout<<element<<" ";
//    }

// }


// Delete Array element from speific index

// #include<iostream>
// using namespace std;

// int main(){
    
//    int arr[5] = {10,2,30,40,50};

// // delete

//     for(int i = 0; i < 5; i++){
//        arr[i] = arr[i+1];
//     }

// // array display

//   for(int i = 0; i < 4; i++){
//     cout<<arr[i]<<" ";
//   }

// }



// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter Size of Array : ";
//     cin>>n;
//    int arr[n];

//   for(int i = 0; i < n; i++){
//     cout<<"Enter element at "<<i<<" index : ";
//     cin>>arr[i];
//    }

//     int deleteIndex;
//    cout<<"Enter index number of deleting element : ";
//    cin>>deleteIndex;
// // delete

//     for(int i = deleteIndex; i < n; i++){
//        arr[i] = arr[i+1];
//     }

// // array display

//     for(int i = 0; i < n-1; i++){
//         cout<<arr[i]<<" ";
//     }

// }

// #include<iostream>
// using namespace std;

// int main(){
    
//     int arr[5] = {10,3,5,8,2};

//     int minValue = arr[3];

//     for(int i = 0; i <5; i++){
//         if(arr[i] < minValue){
//             minValue = arr[i];
//         }
//     }

//     cout<<"Min Value : "<<minValue<<endl;
// }


// #include<iostream>
// #include<limits.h>
// using namespace std;

// int main(){
    
//     int arr[8] = {10,3,5,8,2,85,3,96};

//     int maxValue = INT_MIN;

//     for(int i = 0; i <8; i++){
//         if(arr[i] > maxValue){
//             maxValue = arr[i];
//         }
//     }

//     cout<<"Max Value : "<<maxValue<<endl;
// }
// #include<iostream>
// #include<limits.h>
// using namespace std;

// int main(){
    
//     int arr[8] = {10,3,5,8,2,85,3,96};

//     int minValue = INT_MAX;

//     for(int i = 0; i <8; i++){
//         if(arr[i] < minValue){
//             minValue = arr[i];
//         }
//     }

//     cout<<"Min Value : "<<minValue<<endl;
// }


// #include<iostream>
// #include<limits.h>

// or

// #include<bits/stdc++.h> 
// using namespace std;

// int main(){
    
//     int arr[8] = {10,3,5,8,2,85,3,96};

//     int minValue = INT_MAX;

//     for(int i = 0; i <8; i++){
//         if(arr[i] < minValue){
//             minValue = arr[i];
//         }
//     }

//     cout<<"Min Value : "<<minValue<<endl;
// }


// Swap()

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 20;
    
//     swap(b,a);

//     cout<<"A : "<<a<<endl;
//     cout<<"B : "<<b<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int arr[10] = {12,34,5,67,8,9,1223,56,78,2};

//  cout<<"Before swap/reverse : ";

//     for(int i = 0; i < 10; i++){
//         cout<<arr[i] <<" ";
//     }

// cout<<endl;

//     int i = 0;
//     int j = 9;

//     while(i<j){

//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }

// cout<<"After swap/reverse : ";
//     for(int i = 0; i < 10; i++){
//         cout<<arr[i] <<" ";
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int arr[10] = {12,34,5,67,8,9,1223,56,78,2};

//  cout<<"Before swap/reverse : ";

//     for(int i = 0; i < 10; i++){
//         cout<<arr[i] <<" ";
//     }

//     cout<<endl;

//     int i = 0;
//     int j = 9;

//     while(i<j){

//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }

// cout<<"After swap/reverse : ";
//     for(int i = 0; i < 10; i++){
//         cout<<arr[i] <<" ";
//     }
// }



// #include<iostream>
// using namespace std;

// int main(){

//     int arr[10] = {12,34,67,56,89,44,22,12,98,100};

//     int j = 9;

//     for(int i = 0; i < 10; i++){

//         if(i>=j){
//             break;
//         }

//         swap(arr[i],arr[j]);
//         j--;
//     }


//     cout<<"After swap/reverse : ";
//     for(int i = 0; i < 10; i++){
//         cout<<arr[i] <<" ";
//     }

    

// }




// #include<iostream>
// using namespace std;

// int main(){

//     int arr[10] = {12,34,67,56,89,44,22,12,98,100};

//     int j = 9;

//     for(int i = 0; i < j; i++){

//         // if(i>=j){
//         //     break;
//         // }

//         swap(arr[i],arr[j]);
//         j--;
//     }


//     cout<<"After swap/reverse : ";
//     for(int i = 0; i < 10; i++){
//         cout<<arr[i] <<" ";
//     }

    

// }



// Array -> insert -> element -> without delete element present at that place

// 2D Array

// #include<iostream>
// using namespace std;

// int main(){
//     int row_size = 3;
//     int col_size = 4;

//     int arr[row_size][col_size];

// // manually input
//     arr[0][0] = 11 ;
//     arr[0][1] = 22;
//     arr[0][2] = 44;
//     arr[0][3] = 45;
//     arr[1][0] = 14;
//     arr[1][1] = 63;
//     arr[1][2] = 58;
//     arr[1][3] = 79;
//     arr[2][0] = 47;
//     arr[2][1] =58 ;
//     arr[2][2] =79 ;
//     arr[2][3] =20 ;
// // manually print
//     cout<<arr[0][0]<<endl;
//     cout<<arr[0][1]<<endl;
//     cout<<arr[0][2]<<endl;
//     cout<<arr[0][3]<<endl;
//     cout<<arr[1][0]<<endl;
//     cout<<arr[1][1]<<endl;
//     cout<<arr[1][2]<<endl;
//     cout<<arr[1][3]<<endl;
//     cout<<arr[2][0]<<endl;
//     cout<<arr[2][1]<<endl;
//     cout<<arr[2][2]<<endl;
//     cout<<arr[2][3]<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int row_size = 3;
//     int col_size = 4;

//     int arr[row_size][col_size];

// // manually input
//     arr[0][0] = 11 ;
//     arr[0][1] = 22;
//     arr[0][2] = 44;
//     arr[0][3] = 45;
//     arr[1][0] = 14;
//     arr[1][1] = 63;
//     arr[1][2] = 58;
//     arr[1][3] = 79;
//     arr[2][0] = 47;
//     arr[2][1] =58 ;
//     arr[2][2] =79 ;
//     arr[2][3] =20 ;

// // loop -> print ->2d array


// // foreach -> not ok
//     // for(int element : arr){
//     //     cout<<element<<endl;
//     // }

//     // output

//     for(int i = 0; i < row_size; i++){

//         for(int j = 0; j < col_size; j++){

//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int row_size = 3;
//     int col_size = 4;

//     int arr[row_size][col_size];



//     for(int i = 0; i < row_size; i++){

//         for(int j = 0; j < col_size; j++){
//             cout<<"Row "<<i<<" index & Col "<<j<<" index :";
//            cin>>arr[i][j];
//         }
//         cout<<endl;
//     }

//     // output

//     for(int i = 0; i < row_size; i++){

//         for(int j = 0; j < col_size; j++){

//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// Function


// #include<iostream>
// using namespace std;

// // Function definition
// int addition(){

//     cout<<"Function Called.."<<endl;
// }

// int main(){
//     addition();  // function call
// }


// #include<iostream>
// using namespace std;

// // function declaration

// int addition();

// int main(){
//     addition();  // function call
// }

// // Function definition
// int addition(){

//     cout<<"Function Called.."<<endl;
// }


// #include<iostream>
// using namespace std;

// // Function definition

// int addition(int num1, int num2){

//     cout<<"Function Called.."<<endl;

//     int sum = num1+num2;

//     cout<<"Sum : "<<sum<<endl;
// }

// int main(){
//     addition(10,20);  // function call
// }


// #include<iostream>
// using namespace std;

// // Function definition

// int addition(int num1, int num2){

//     cout<<"Function Called.."<<endl;

//     int sum = num1+num2;

//     return sum;
// }

// int main(){
//    int result =  addition(10,20);  // function call

//    cout<<"Result : "<<result<<endl;
// }



// #include<iostream>
// using namespace std;

// // Function definition

// void addition(int num1, int num2){

//     cout<<"Function Called.."<<endl;

//     int sum = num1+num2;
//     cout<<"Sum : "<<sum<<endl;

// }

// int main(){
//    addition(10,20);  // function call

// }



// #include<iostream>
// using namespace std;

// // Function definition

// int printName(string name){

//  cout<<"Name : "<<name<<endl;

// }

// int main(){
//    printName("Fatima"); 

// }


// ASCII ref : https://www.w3schools.com/charsets/ref_html_ascii.asp

// 0 -> 48
// 9 -> 57


// A -> 65
// Z -> 90

// a = 97
// z = 122


// #include<iostream>
// using namespace std;

// int main(){

//    const char *str = "Pawan";

//     cout<<str<<endl;

//     int A = 'A';

//     int Z = 'Z';

//     cout<<"ASCCI of A : "<<A<<endl;
//     cout<<"ASCCI of Z : "<<Z<<endl;

//     char ch = 65;

//     cout<<ch<<endl;
// }



// #include<iostream>
// using namespace std;

// // Function definition

// string printName(){
    
//     string name = "Fatima Maam";
//     return name;

// }

// int main(){
//  string str =  printName(); 

//  cout<<"Name : "<<str<<endl;

// }


// // Type 1 : TSRN

// #include<iostream>
// using namespace std;

// int addition(int num1, int num2){

//     int sum = num1+num2;
//     cout<<"Sum : "<<sum<<endl;
// }

// int main(){
//     addition(10,20);
// }

// // Type 2 : TNRN

// #include<iostream>
// using namespace std;

// int addition(){

//     int num1= 10;
//     int num2 = 20;
//     int sum = num1+num2;
//     cout<<"Sum : "<<sum<<endl;
// }

// int main(){
//     addition();
// }

// // Type 3 : TNRS

// #include<iostream>
// using namespace std;

// int addition(){

//     int num1= 10;
//     int num2 = 20;
//     int sum = num1+num2;
  
//   return sum;
// }

// int main(){
//     cout<<"Sum : "<<addition()<<endl;
// }

// Type 3 : TSRS

// #include<iostream>
// using namespace std;

// int addition(int num1, int num2){

//     int sum = num1+num2;
  
//   return sum;
// }

// int main(){
//     cout<<"Sum : "<<addition(10,20)<<endl;
// }

// Default parameter

// #include<iostream>
// using namespace std;

// int addition(int num1, int num2 = 50){  // jab bhee ap default parameter set kr rhe ho to ap use ek dam right me krna in function me

//     int sum = num1+num2;
  
//   return sum;
// }

// int main(){
//     cout<<"Sum : "<<addition(10,30)<<endl;
// }


// #include<iostream>
// using namespace std;

// int calculate(){
//     cout<<"Outer Function Called.."<<endl;

//     auto addition=[](){
//         cout<<"Inner Function Called.."<<endl;
//     };

//     addition();
// }

// int main(){

//     calculate();


// }



// #include<iostream>
// using namespace std;


// int addition(){
//     cout<<"Inner Function Called.."<<endl;
// };

// int calculate(){
//     cout<<"Outer Function Called.."<<endl;

//     addition();
// }

// int main(){

//     calculate();
// }




// #include<iostream>
// using namespace std;


// int factorial(int num){

//     // Base Condition

//     if(num==1){
//         return 1;
//     }

//     return num * factorial(num-1);
// }

// int main(){

//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int result = factorial(num);

//     cout<<num<<" Factorial : "<<result<<endl;
    

// }




// #include<iostream>
// using namespace std;


// int addition(int num){

//     // Base Condition

//     if(num==1){
//         return 1;
//     }

//     return num + addition(num-1);
// }

// int main(){

//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;

//     int result = addition(num);

//     cout<<" Addition : "<<result<<endl;
    

// }


// Pointer

// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;  // variable declared

//     int *ptr = &a;  // pointer variable declared and assign address of a.

// // value
//     cout<<"a : "<<a<<endl;
//     cout<<"*ptr : "<<*ptr<<endl;

//     // address

//     cout<<"Address of a : "<<&a<<endl;
//     cout<<"Address of ptr : "<<ptr<<endl;

// }


// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;

//     int *ptr1 = &a;

//     int **ptr2 = &ptr1;

//     cout<<*ptr1<<endl;  //10
//     cout<<ptr1<<endl;

//     cout<<&a<<endl;

//     cout<<*ptr2<<endl;

//     cout<<**ptr2<<endl;
// }


// Array pointer



// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5] = {10,20,30,40,50};

//     // int *ptr = arr;  ->array ka base address -> &arr[0]

//     // cout<<arr<<endl;

//     // cout<<&arr[0]<<endl;


//     // int *ptr = arr;

//     // cout<<*ptr<<endl;  


//     int *ptr = arr;

//     for(int i = 0; i < 5; i++){
//         cout<<"Address of "<<i<<" index : "<<(ptr+i)<<" and its value : ";
//         cout<<*(ptr + i)<<endl;
//     }

// }



// #include<iostream>
// using namespace std;

// int main(){
//     int x = 10;

//     int *ptr = &x;

//     cout<<x<<endl;  //10
//     cout<<*ptr<<endl; // 10

//     *ptr = 80;

//     cout<<x<<endl;  //80
//     cout<<*ptr<<endl; // 80

// }



//  refrence variable -> address -> & -> refrence varable store the address of another variable


// Call by value

// #include<iostream>
// using namespace std;

// int print(int &x){

//     cout<<"Value of x : "<<x<<endl;
//     cout<<"Address Value of x : "<<&x<<endl;

//     x = 100;

// }

// int main(){
    
//     int a = 10;

//     print(a);

//     cout<<"Value of a : "<<a<<endl;
//     cout<<"Value of a : "<<&a<<endl;
// }




// call by value

// #include <iostream>
// using namespace std;

// // function to update the original value
// void increment(int num)
// {
//     cout<<"post inc : "<<num++<<endl;  //5
//     cout << num << endl;  //6
// }

// int main()
// {
//     int number = 5;
//     increment(number); // Passing 'number' by value
//     cout << number << endl;
//     return 0;
// }

// passing array in function

// #include<iostream>
// using namespace std;

// int printArray(int arr[], int size){

//     for(int i = 0; i < size; i++){
//         cout<<arr[i]<<" ";
//     }

// }

// int main(){
//     int n = 6;
//     int arr[n] = {11,222,45,67,89,54};

//     printArray(arr, n);
// }


// #include<iostream>
// using namespace std;

// int printArray(int *arr, int size){

//     for(int i = 0; i < size; i++){
//         cout<<arr[i]<<" ";
//     }

// }

// int main(){
//     int n = 6;
//     int arr[n] = {11,222,45,67,89,54};

//     printArray(arr, n);
// }



// oops 


// #include<iostream>
// using namespace std;

// // create class
// class Person{

// };

// int main(){
//     Person fatima;  // create object
// }


// #include<iostream>
// using namespace std;

// // create class
// class Person{
//     // Access specifier
//     public :
//     string name;
//     int age;


//     // method

//     void display(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };

// int main(){
//     Person f;  // create object

// // insilization -> outide of class
//     f.name = "Fatima Ji";
//     f.age = 11;

//     f.display();
// }


// #include<iostream>
// using namespace std;

// // create class
// class Person{
//     // Access specifier
//     // private :
//     // protected :
//     // public : 
//     string name;
//     int age;


//     // method

//     void display(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };

// int main(){
//     Person f;  // create object

// // insilization -> outide of class
//     f.name = "Fatima Ji";
//     f.age = 11;

//     f.display();
// }


// #include<iostream>
// using namespace std;

// // create class
// class Person{
//     // Access specifier
//     // private :
//     // protected :
//     public : 
//     string name;
//     int age;


// };

// int main(){
//     Person f;  // create object

// // insilization -> outide of class
//     f.name = "Fatima Ji";
//     f.age = 11;

// // outside -> access
//    cout<<"Name : "<<f.name<<endl;
//    cout<<"Age : "<<f.age<<endl;
// }




// #include<iostream>
// using namespace std;

// // create class
// class Person{
//     // Access specifier
//     // private :
//     public :
//     string name;
//     int age;


// };

// int main(){
//     Person f;  // create object -> allocate memory to data member


// // outside -> access
//    cout<<"Name : "<<f.name<<endl;
//    cout<<"Age : "<<f.age<<endl;
// }


// getter and setter method

// #include<iostream>
// using namespace std;

// // create class
// class Person{
//     private :
//     string name;
//     int age;

//     public :

// //setter method
//     void setData(string name, int age){
//         this->name = name;
//         this->age = age;
//     }
//     void setData(){
//        cout<<"Aur setter bhai chal jawoge"<<endl;
//     }

// // getter method
//     void getDetails(){
//         cout<<"Name : "<<this->name<<endl;
//         cout<<"Age : "<<this->age<<endl;
//     }

    

// };

// int main(){
//     Person f,j;  // create object -> allocate memory to data member

//     f.setData("Fatima",18);

//     f.setData();

//     f.getDetails();

//     j.setData("Janam",11);

//     j.getDetails();
// }





// #include<iostream>
// using namespace std;

// // create class
// class Person{
//     private :
//     string name;
//     int age;

//     public : 
//     // constructor

//     Person(string firstname, int currentage){
//          name = firstname;
//          age = currentage;
//     }

// // getter method
//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }

    

// };

// int main(){
//   Person p("Praksh",15);

//   p.getDetails();
// }




// Array of object -> 1. setter method


// #include<iostream>
// using namespace std;

// // create class
// class Person{
//     private :
//     string name;
//     int age;

//     public :
// // setter method
//    void setDetails(string firstname, int currentage){
//          name = firstname;
//          age = currentage;
//     }

// // getter method
//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }

    

// };

// int main(){
//   Person p[2];
    
//     p[0].setDetails("Pawan", 24);
//     p[1].setDetails("Manish", 25);

//     p[0].getDetails();
//     p[1].getDetails();

// }

// Method : 2 -> constructor

// #include<iostream>
// using namespace std;

// // create class
// class Person{
//     protected :
//     string name;
//     int age;

//     public :
// // constructor

//  Person(string firstname, int currentage){
//          name = firstname;
//          age = currentage;
//     }

// // getter method
//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }

// };

// int main(){
//   Person p[2]  = {
//     Person("Pawan",24),
//     Person("Manish",25)
//   };

// cout<<"Object first details : "<<endl;
//   p[0].getDetails();

// cout<<"Object second details : "<<endl;
//   p[1].getDetails();
       

// }

// Array Pointer Object : setter method

// #include<iostream>
// using namespace std;

// // create class
// class Person{
//     protected :
//     string name;
//     int age;

//     public :
// // setter method
//    void setDetails(string firstname, int currentage){
//          name = firstname;
//          age = currentage;
//     }

// // getter method
//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }

// };

// int main(){
//   Person *p[2];

//     p[0] = new Person();  // allocate memory
//     p[1] = new Person(); // allocate memory


//     p[0]->setDetails("Pawan", 24);
//     p[1]->setDetails("Manish", 25);

//     p[0]->getDetails();
//     p[1]->getDetails();

//     delete *p;  // deallocate memory

// }


// Array Pointer Object : constructor

// #include<iostream>
// using namespace std;

// // create class
// class Person{
//     protected :
//     string name;
//     int age;

//     public :
// // constructor

//  Person(string firstname, int currentage){
//          name = firstname;
//          age = currentage;
//     }

// // getter method
//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }

// };

// int main(){
//   Person *p[2];

//     p[0] = new Person("Pawan", 24);  // allocate memory
//     p[1] = new Person("Manish", 25); // allocate memory


//     p[0]->getDetails();
//     p[1]->getDetails();

//     delete *p;  // deallocate memory

// }


// #include<iostream>
// using namespace std;

// int a = 99;

// int main(){
//     int a = 10;
//     cout<<"Local Value : "<<a<<endl;
//     cout<<"Globle Value : "<<::a<<endl;
// }



// Static Data member : 

// #include<iostream>
// using namespace std;

// class Teacher{

//     public :

//       string name; // instance variable
//       int age; // instance variable
//       static double salary;  // class level variable

//     Teacher(){
//         this->name = "Raj";
//         this->age = 11;

//     }

//     Teacher(string name, int age){ 
//         this->name = name;
//         this->age = age;
//     }

//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"Salary : "<<salary<<endl;
//     }

// };

// double Teacher::salary = 99;

// int main(){

//     Teacher t1;  // create object => allocate memory to non static data member => automic parameterless cunstructor called..
    
//     Teacher t2("Vraj",5);  // call -> parameter constructor
//     t1.getDetails();

//     t2.getDetails(); 
// }


// Static member function


// #include<iostream>
// using namespace std;

// class Teacher{

//     public :
//       static double salary;  // class level variable


//   static void getDetails(){
//         cout<<"Salary : "<<salary<<endl;
//     }

// };

// double Teacher::salary = 99;  // static data member initialiston

// int main(){

//     Teacher::getDetails();
// }



// Destrutor



// #include<iostream>
// using namespace std;

// class Teacher{

//     public :

//     Teacher(){
//         cout<<"Constructor Called..."<<endl;
//     }


// };



// int main(){

//     Teacher t1;  // automatic parameterless (default) constructor call
  
// }



// #include<iostream>
// using namespace std;

// class Teacher{

//     public :

//     Teacher(){
//         cout<<"Constructor Called..."<<endl;
//     }

//     ~Teacher(){
//         cout<<"Destructor Called..."<<endl;
//     }


// };



// int main(){

//     Teacher t1;  // automatic parameterless (default) constructor call
  
// }




// #include<iostream>
// using namespace std;

// class Teacher{

//     public :
//     int *ptr;

//     Teacher(){
//         cout<<"Constructor Called..."<<endl;
//     }
//     Teacher(int x){
//        ptr = new int;

//        ptr = &x;
//     }
    

//     ~Teacher(){
//     delete ptr;
//     }


//     void getDetails(){
//         cout<<"Value : "<<*ptr<<endl;
//     }


// };



// int main(){

//     Teacher t1;  // automatic parameterless (default) constructor call
//     Teacher t2(10);

//     t2.getDetails();
  
// }



// Inheritance 


// single inheritance 

// #include<iostream>
// using namespace std;


// // 
// class Vehical{

//     public :

//     void display(){
//         cout<<"Veical has atleat 2 wheels"<<endl;
//     }

// };

// class Car : public Vehical{

// };

// int main(){

//     // Vehical v1;

//     // v1.display();

// Car c1;

// c1.display();

// }

// #include<iostream>
// using namespace std;


// // Base class
// class Vehical{

//     private :

//     int number;

    

// };


// // Derived Class
// class Car : public Vehical{
//     public :

//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };

// int main(){

//     // Vehical v1;

//     // v1.display();

// Car c1;

// c1.display();

// }




// #include<iostream>
// using namespace std;


// // Base class
// class Vehical{

//     protected :

//     int number;

    

// };


// // Derived Class
// class Car : public Vehical{
//     public :

//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };

// int main(){

//     // Vehical v1;

//     // v1.display();

// Car c1;

// c1.display();

// }


// Way of Inheritance 

// public to public 

// #include<iostream>
// using namespace std;

// // Base class
// class Vehical{

//     public :

//     int number;

    

// };


// // Derived Class
// class Car : public Vehical{

//    public :

//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };

// int main(){


// Car c1;

// c1.display();

// }


// // public to protected 

// #include<iostream>
// using namespace std;

// // Base class
// class Vehical{

//     public :

//     int number;

    

// };


// // Derived Class
// class Car : protected Vehical{

//    public :

//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };

// int main(){


// Car c1;

// c1.display();

// }


// public to private 

// #include<iostream>
// using namespace std;

// // Base class
// class Vehical{

//     public :

//     int number;

    

// };


// // Derived Class
// class Car : private Vehical{

  
// };

// class BMW : public Car{
//     public :

//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };


// int main(){


// // Car c1;

// // c1.display();


// BMW b1;

// b1.display();

// }


// // protected to public

// #include<iostream>
// using namespace std;

// // Base class
// class Vehical{

//     protected :

//     int number;

    

// };


// // Derived Class
// class Car : public Vehical{


// };

// class BMW : public Car{
//     public :

//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };

// int main(){


// // Car c1;

// // c1.display();

// BMW b1;

// b1.display();

// }


// // protected to protected

// #include<iostream>
// using namespace std;

// // Base class
// class Vehical{

//     protected :

//     int number;

    

// };


// // Derived Class
// class Car : protected Vehical{


// };

// class BMW : public Car{
//     public :

//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };

// int main(){


// // Car c1;

// // c1.display();

// BMW b1;

// b1.display();

// }

// protected to private



// #include<iostream>
// using namespace std;

// // Base class
// class Vehical{

//     protected :

//     int number;

    

// };


// // Derived Class
// class Car : private Vehical{


// };

// class BMW : public Car{
//     public :

//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };

// int main(){


// // Car c1;

// // c1.display();

// BMW b1;

// b1.display();

// }


// // private to public

// #include<iostream>
// using namespace std;

// // Base class
// class Vehical{

//     private :

//     int number;

    

// };


// // Derived Class
// class Car : public Vehical{
//     public :

//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }

// };



// int main(){


// Car c1;

// c1.display();


// }


// // private to protected

// #include<iostream>
// using namespace std;

// // Base class
// class Vehical{

//     private :

//     int number;

    

// };


// // Derived Class
// class Car : protected Vehical{
//     public :

//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }

// };



// int main(){


// Car c1;

// c1.display();


// }




// private to private

// #include<iostream>
// using namespace std;

// // Base class
// class Vehical{

//     private :

//     int number;

    

// };


// // Derived Class
// class Car : private Vehical{
//     public :

//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }

// };



// int main(){


// Car c1;

// c1.display();


// }





//  Single Inheritance

// #include <iostream>
// using namespace std;
// // Base class
// class Animal {
// public:
//     void eat() {
//         cout << "Eating..." << endl;
//     }
// };
// // Derived class
// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "Barking..." << endl;
//     }
// };
// int main() {
//     Dog d;
//     d.eat();  // Inherited from Animal
//     d.bark();
//     return 0;
// }



// Multiple Inheritance


// #include <iostream>
// using namespace std;
// // Base class 1
// class Person {
// public:
//     void speak() {
//         cout << "Speaking..." << endl;
//     }
// };
// // Base class 2
// class Employee {
// public:
//     void work() {
//         cout << "Working..." << endl;
//     }
// };
// // Derived class
// class Manager : public Person, public Employee {
// public:
//     void manage() {
//         cout << "Managing..." << endl;
//     }
// };
// int main() {
//     Manager m;
//     m.speak();
//     m.work();
//     m.manage();
//     return 0;
// }



// Multilevel Inheritance

// #include <iostream>
// using namespace std;
// // Base class
// class Vehicle {
// public:
//     void drive() {
//         cout << "Driving..." << endl;
//     }
// };
// // Derived class
// class Car : public Vehicle {
// public:
//     void honk() {
//         cout << "Honking..." << endl;
//     }
// };
// // Further derived class
// class SportsCar : public Car {
// public:
//     void turbo() {
//         cout << "Activating Turbo..." << endl;
//     }
// };
// int main() {
//     SportsCar sc;
//     sc.drive();
//     sc.honk();
//     sc.turbo();
//     return 0;
// }


//  Hierarchical Inheritance

// #include <iostream>
// using namespace std;
// // Base class
// class Shape {
// public:
//     void draw() {
//         cout << "Drawing Shape..." << endl;
//     }
// };
// // Derived class 1
// class Circle : public Shape {
// public:
//     void area() {
//         cout << "Calculating Circle Area..." << endl;
//     }
// };
// // Derived class 2
// class Square : public Shape {
// public:
//     void area() {
//         cout << "Calculating Square Area..." << endl;
//     }
// };
// int main() {
//     Circle c;
//     Square s;
//     c.draw();
//     c.area();
//     s.draw();
//     s.area();
//     return 0;
// }


//  Hybrid Inheritance


// #include <iostream>
// using namespace std;
// // Base class
// class Engine {
// public:
//     void start() {
//         cout << "Engine started." << endl;
//     }
// };
// // Intermediate base class 1
// class Car : virtual public Engine {};
// // Intermediate base class 2
// class Boat : virtual public Engine {};
// // Derived class
// class AmphibiousVehicle : public Car, public Boat {
// public:
//     void transform() {
//         cout << "Switching modes." << endl;
//     }
// };
// int main() {
//     AmphibiousVehicle av;
//     av.start();  // Inherited from Engine
//     av.transform();
//     return 0;
// }



// // https://docs.google.com/document/d/1AKXjMAy5thNfqEioBmuocluC2UqlaPsJGbY7Riyj2to/edit?tab=t.0




// Polymorphism

// 1. compile time polymorphism -> static  -> overloading


// #include<iostream>
// using namespace std;

// class Student{

//     public :

//     string name;
//     int age;
//     int id;

// // constructor -> overloading

//     Student(){
//         cout<<"Parameterless Constructor called S1.."<<endl;
//     }

//     Student(string name){
//         this->name = name;
//         cout<<"Parameter Constructor called S2.."<<endl;

//     }
//     Student(string name, int age){
//         this->name = name;
//         this->age = age;
//         cout<<"Parameter Constructor called S3.."<<endl;
//     }
//     Student(string name, int age, int id){
//         this->name = name;
//         this->age = age;

//         this->id = id;
//         cout<<"Parameter Constructor called S4.."<<endl;
//     }

//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"id : "<<id<<endl;
//         cout<<"Name : "<<name<<endl;
//     }


// };

// int main(){

//     Student s1;
//     Student s2("Raj");
//     Student s3("Janim",22);
//     Student s4("Utkarsh", 20, 1);

//     s4.getDetails();


// }


// #include<iostream>
// using namespace std;

// class Student {

//     public :

//     string name;
//     int age;
//     int id;

//     // constructor -> overloading
//     Student(){
//         cout<<"Parameterless Constructor called S1.."<<endl;
//     }

//     Student(string name){
//         this->name = name;
//         cout<<"Parameter Constructor called S2.."<<endl;
//     }
//     Student(string name, int age){
//         this->name = name;
//         this->age = age;
//         cout<<"Parameter Constructor called S3.."<<endl;
//     }
//     Student(string name, int age, int id){
//         this->name = name;
//         this->age = age;
//         this->id = id;
//         cout<<"Parameter Constructor called S4.."<<endl;
//     }

//     // method overloading with different parameters
//     void getDetails(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//         cout<<"id : "<<id<<endl;
//     }

//     void getDetails(bool onlyName){
//         if (onlyName) {
//             cout<<"Name : "<<name<<endl;
//         }
//     }
// };

// int main(){

//     Student s1;
//     Student s2("Raj");
//     Student s3("Janim",22);
//     Student s4("Utkarsh", 20, 1);

//     s4.getDetails();  // Calls full details method

//     cout<<"Next... "<<endl;
//     s2.getDetails(true);  // Calls only name method

// }



// Operator overloading 

// #include<iostream>
// using namespace std;

// class Complex{

//     public :

//     int real;
//     int img;

//     Complex() {
//         real = 0;
//         img = 0;
//     }

//     Complex(int real, int img){
//         this->real = real;
//         this->img = img;
//     }
//     Complex operator +(Complex &other){
//         Complex result;
//         result.real = real + other.real;
//         result.img = img +other.img;
//         return result;
//     }

//     void getComplex(){
//         cout<<"Complex number : "<<real<<"+"<<img<<"i"<<endl;
//     }


// };

// int main(){

//     Complex c1(5,4);

//     Complex c2(2,1);

//     Complex c3 = c1+c2;

//     c3.getComplex();

// }



// #include<iostream>
// using namespace std;

// class Complex{

//     public :

//     int real;
//     int img;

//     Complex() {
//         real = 0;
//         img = 0;
//     }

//     Complex(int real, int img){
//         this->real = real;
//         this->img = img;
//     }
//     Complex operator *(Complex &other){
//         Complex result;
//         result.real = real * other.real;
//         result.img = img *other.img;
//         return result;
//     }

//     void getComplex(){
//         cout<<"Complex number : "<<real<<"+"<<img<<"i"<<endl;
//     }


// };

// int main(){

//     Complex c1(5,4);

//     Complex c2(2,1);

//     Complex c3 = c1*c2;

//     c3.getComplex();

// }



// Polymorphism : run-time polymorphism


// #include<iostream>
// using namespace std;

// class Parent{
//     public :

//    virtual void display(){
//         cout<<"Parrent Class"<<endl;
//     }
// };

// class Child:public Parent{
//     public:
//     void display() override {
//         cout<<"Child Class"<<endl;
//     }
// };

// int main(){

//     // Parent p;

//     // p.display();

//     Child ch;

//     ch.display();

//     ch.Parent::display();

// }


//Abstraction Class


// #include<iostream>
// using namespace std;

// class Shekhawat{
//     public :

//     virtual void speak() = 0;

//     void display(){
//         cout<<"Base Class.."<<endl;
//     }
// };

// class Fatima: public Shekhawat{

//     public :

//     void speak(){
//         cout<<"She speak continuasly..."<<endl;
//     }
// };


// int main(){
//     // Shekhawat sh; // we can not create object of abstract class

//     // Shekhawat::display();

//     Fatima ft;

//     ft.display();

// }



// #include<iostream>
// using namespace std;

// class Shekhawat{
//     public :
//      static void display(){ 
//         cout<<"Base Class.."<<endl;
//     }
// };

// int main(){
//     Shekhawat::display(); 
// }



// #include<iostream>
// using namespace std;

// class Shekhawat{
//     public :

//     virtual void speak() = 0;

//     void display(){
//         cout<<"Base Class.."<<endl;
//     }
// };

// class Fatima: public Shekhawat{

//     public :

//     void speak() override {
//         cout<<"She speak continuasly..."<<endl;
//     }
// };


// int main(){
  
//     Fatima ft;

//     ft.display();
//     ft.speak();

// }


// #include<iostream>
// using namespace std;
// // this class behave like interface
// class Shekhawat{
//     public :

//     virtual void speak() = 0;


// };

// class Fatima: public Shekhawat{

//     public :

//     void speak() override {
//         cout<<"She speak continuasly..."<<endl;
//     }
// };


// int main(){
  
//     Fatima ft;

//     ft.speak();

// }




// https://docs.google.com/document/d/1HmbSaixc9NlRKNxcrconNpOXCnvLIeSnU7i1elVflow/edit?tab=t.0