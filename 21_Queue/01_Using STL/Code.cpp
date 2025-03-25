#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> myqueue;

    myqueue.push(10);
    myqueue.push(20);

    myqueue.push(30);
    myqueue.push(40);

    myqueue.push(50);
    myqueue.push(60);

    cout << "Front element in queue : " << myqueue.front() << endl;

    cout << "Rear element in queue : " << myqueue.back() << endl;

    myqueue.pop();

    cout << "Front element in queue : " << myqueue.front() << endl;

    cout << "Size of queue : " << myqueue.size() << endl;

    cout << "Queue is empty or not : " << (myqueue.empty() ? "Yes" : "NO" )<< endl;

    while(!myqueue.empty()){
        cout << myqueue.front() << " ";
        myqueue.pop();
    }

    cout << endl;

    cout << "Size of queue : " << myqueue.size() << endl;
}