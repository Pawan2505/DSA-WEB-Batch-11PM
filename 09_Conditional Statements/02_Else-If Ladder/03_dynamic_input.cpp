#include<iostream>
using namespace std;

int main() {

    char choice = 'y';  // Initialize choice to 'y' so the loop can run

    while(choice == 'y' || choice == 'Y') {

        int marks;  // declaration
        cout << "Enter Marks: ";
        cin >> marks; // user input

        if(marks >= 90) {
            cout << "Grade A+" << endl;
        }
        else if(marks >= 80) {
            cout << "Grade A" << endl;
        }
        else if(marks >= 70) {
            cout << "Grade B+" << endl;
        }
        else if(marks >= 60) {
            cout << "Grade B" << endl;
        }
        else if(marks >= 50) {
            cout << "Grade C" << endl;
        }
        else {
            cout << "Sorry, You are failed!" << endl;
        }

        cout << "Do you want to try next (y/n): ";
        cin >> choice;
    }

    cout << "Thank You!" << endl;

    return 0;
}
