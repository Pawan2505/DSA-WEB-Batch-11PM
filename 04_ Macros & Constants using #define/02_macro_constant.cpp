#include<iostream>
using namespace std;

#define num "Pawan Maurya"  // Defining a macro constant 'num' with value "Pawan Maurya"

int main(){
    // Trying to modify a macro constant (not allowed)
    // num = "Pooja";  // Not OK: Macro constants are replaced by the preprocessor and cannot be modified

    cout << num << endl;  // Output: Pawan Maurya
}
