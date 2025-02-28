#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v1;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    cout << "Size of vector : " << v1.size() << endl;

    cout << "at 0 index : " << v1[0] << endl;

    cout << "Front element in vector : " << v1.front() << endl;

    cout << "Last element in vector :" << v1.back() << endl;

    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);

    cout << "Element Present in vector : ";
    // method:1
    for (int i = 0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }

    // method :2

    // for (int item : v1)
    // {
    //     cout << item << " ";
    // }
    cout << endl;

    // cout << "Element get my negative index " << v1[-1] << endl;  // not ok
    v1.pop_back();


cout << "Element Present in vector : ";
// method:1
for (int i = 0; i < v1.size(); i++)
{
    cout << v1[i] << " ";
}
cout << endl;

cout << "Method at(2) : " << v1.at(2) << endl;

cout << "Complete vector clear : " <<endl;
v1.clear();

cout<< "Vector is empty or not : " << v1.empty() << endl;
cout << "Size of vector : " << v1.size() << endl;

cout << "Element Present in vector : ";

// method:1
for (int i = 0; i < v1.size(); i++)
{
    cout << v1[i] << " ";
}
cout << endl;
cout << "Size of vector : " << v1.size() << endl;
v1.push_back(10);
v1.push_back(100); // not work
v1.resize(1);
// v1.push_back(100);
v1.push_back(200);
v1.push_back(300);
v1.push_back(400);
for (int i = 0; i < v1.size(); i++)
{
    cout << v1[i] << " ";
}

cout << endl;

v1.insert(v1.begin()+3,999);
for (int i = 0; i < v1.size(); i++)
{
    cout << v1[i] << " ";
}

cout << endl;

v1.erase(v1.begin() + 3);

for (int i = 0; i < v1.size(); i++)
{
    cout << v1[i] << " ";
}

cout << endl;


}