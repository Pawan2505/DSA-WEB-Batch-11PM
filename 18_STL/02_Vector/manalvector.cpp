#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {1, 22, 3, 4, 5};

    // Range-based for loop to print elements
    for (int item : v1)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
