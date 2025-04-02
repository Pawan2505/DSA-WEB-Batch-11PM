
// #include <iostream>
// using namespace std;

// int prime(int num)
// {

//     int count = 0;

//     for (int i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             count++;
//         }
//     }

//     if (count == 2)
//     {
//         cout << num << " Prime Number!" << endl;
//     }
//     else
//     {
//         cout << num << " NOT Prime Number!" << endl;
//     }
// }

// int main()
// {
//     int num;
//     cout << "Enter Number : ";
//     cin >> num;
//     prime(num);
// }

#include <iostream>
using namespace std;
int prime(int num, int i,int count)
{

    // base condition
    
    if (i > num)
    {
        return count;
    }

    if (num % i == 0)
    {
        count++;
    }

    return prime(num, i+1, count);
}

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;
    int count = prime(num, 1,0);

    if (count == 2)
    {
        cout << "Prime Number!" << endl;
    }
    else
    {
        cout << "Not Prime Number!" << endl;
    }
}