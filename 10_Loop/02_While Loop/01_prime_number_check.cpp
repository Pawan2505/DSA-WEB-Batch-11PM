
#include<iostream>
using namespace std;

int main(){
    // Initialize the choice variable to 'y' to enter the loop
    char choice = 'y';

    // Loop to allow the user to input numbers and check primality repeatedly
    while(choice == 'y' || choice == 'Y'){
   
        int num;
        cout << "Enter Number: ";
        cin >> num;

        int count = 0;
        
        cout << "Factors: ";
        // Loop to find all factors of the entered number
        for(int i = 1; i <= num; i++){
            if(num % i == 0){  // If i is a factor of num
                cout << i << " ";  // Print the factor
                count++;  // Increment the count of factors
            }
        }

        cout << "\nCount of factors: " << count << endl;

        // If the number has exactly two factors, it is a prime number
        if(count == 2){
            cout << "\nPrime Number!" << endl;
        } else {
            cout << "\nNot a Prime Number!" << endl;
        }

        // Ask the user if they want to continue checking for prime numbers
        cout << "\nDo you want to try another number? (y/n): ";
        cin >> choice;
    }
}
