#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n; // Base case
    }

    int a = 0, b = 1, result;
    for (int i = 2; i <= n; i++)
    {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}

int main()
{
    int n;

    cout << "Enter a number to find its Fibonacci number: ";
    cin >> n;

    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

    return 0;
}
