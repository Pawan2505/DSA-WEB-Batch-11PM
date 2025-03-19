#include <iostream>
using namespace std;

int hcf(int num1, int num2)
{

    // Method - 2

    int hcfdata = 0;

    for (int i = 1; i <= num1 || i <= num2; i++)
    {

        if (num1 % i == 0 && num2 % i == 0)
        {
            hcfdata = i;
        }
    }

    return hcfdata;
}

int main()
{

    int num1 = 8;
    int num2 = 20;

    int result = hcf(num1, num2);

    cout << "HCF of " << num1 << " and " << num2 << " is : " << result << endl;
}