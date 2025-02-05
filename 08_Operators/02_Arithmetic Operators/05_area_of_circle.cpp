#include <iostream>
#define PI 3.14
using namespace std;

int main() {
    float r;

    // Calculate area of a circle
    cout << "Enter Radius: ";
    cin >> r;

    float area = PI * r * r;
    cout << "Area: " << area << endl;

    return 0;
}
