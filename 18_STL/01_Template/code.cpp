// #include <iostream>
// using namespace std;

// int addition(int x, int y)
// {
//     cout << "Sum : " << x + y << endl;
// }

// int main()
// {

//     addition(10, 20);
// }

// Template : inside function

// #include <iostream>
// using namespace std;

// template<typename T>
// T addition(T x, T y)
// {
//     cout << "Sum : " << x + y << endl;
// }

// int main()
// {

//     addition(10.5, 20.8);
// }

// #include <iostream>
// using namespace std;

// template <typename T1, typename T2, typename T3>
// T1 addition(T1 x, T2 name, T3 num)
// {
//     cout << "Integer Value : " << x << endl;
//     cout << "String value : " << name << endl;
//     cout << "Double value : " << num << endl;
// }

// int main()
// {

//     addition(12, "pawan",25.5);
// }

// #include<iostream>
// using namespace std;

// int main(){

//     // template<typename T>  // Not ok

// }


// Template : inside class

#include <iostream>
using namespace std;

template<typename T1,typename T2>
class Student
{
public:
    T1 name;
    T2 age;


    Student(T1 name, T2 age)
    {
        this->name = name;
        this->age = age;
    }


    T1 display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    Student<string,int> s1("Pawan",25);

    s1.display();
}