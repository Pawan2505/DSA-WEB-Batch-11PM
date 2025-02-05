
#include<iostream>
using namespace std;

int main() {
    int n1 = 0;
    cout << n1 << " ";
    int n2 = 1;
    cout << n2 << " ";

    for (int i = 2; i < 10; i++) {
        int n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }

    return 0;
}
