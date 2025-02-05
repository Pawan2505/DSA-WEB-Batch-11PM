// Description: Implements a grading system using an else-if ladder.

#include<iostream>
using namespace std;

int main() {
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        int marks;
        
        cout << "Enter Marks: ";
        cin >> marks;

        if (marks >= 90) {
            cout << "Grade: A+" << endl;
        } else if (marks >= 80) {
            cout << "Grade: A" << endl;
        } else if (marks >= 70) {
            cout << "Grade: B+" << endl;
        } else if (marks >= 60) {
            cout << "Grade: B" << endl;
        } else if (marks >= 50) {
            cout << "Grade: C" << endl;
        } else {
            cout << "Sorry, you have failed!" << endl;
        }

        cout << "Do you want to try again? (y/n): ";
        cin >> choice;
    }

    cout << "Thank you!" << endl;

    return 0;
}
