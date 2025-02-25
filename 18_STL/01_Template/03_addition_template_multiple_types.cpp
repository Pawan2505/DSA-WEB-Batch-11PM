#include <iostream>
using namespace std;

// Template function that takes multiple data types
template <typename T1, typename T2, typename T3>
T1 addition(T1 x, T2 name, T3 num)
{
    // Displaying values of different types
    cout << "Integer Value : " << x << endl;
    cout << "String value : " << name << endl;
    cout << "Double value : " << num << endl;
}

int main()
{
    // Calling the template function with different data types
    addition(12, "pawan", 25.5);
}
