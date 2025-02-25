#include <iostream>
using namespace std;

// Template function to add two values of any data type
template <typename T>
T addition(T x, T y)
{
    cout << "Sum : " << x + y << endl;
}

int main()
{
    // Calling the template function with double values
    addition(10.5, 20.8);
}
