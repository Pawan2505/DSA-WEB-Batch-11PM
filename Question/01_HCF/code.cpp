#include <iostream>
using namespace std;

int hcf(int num1, int num2)
{

    // Method - 1
    
    for (int i = ((num1 < num2) ? num1 : num2); i >= 1; i--)
    {

        if (num1 % i == 0 && num2 % i == 0)
        {
            return i;
            
        }
    }
}

int main()
{

    int num1 = 8;
    int num2 = 20;

    int result = hcf(num1, num2);

    cout << "HCF of " << num1 << " and " << num2 << " is : " << result << endl;
}