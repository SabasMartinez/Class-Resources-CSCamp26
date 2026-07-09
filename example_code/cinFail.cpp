//this will try to validate variable type int
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    // char myLetter = '\0';
    // cin >> myLetter;
    
    // myLetter = toupper(myLetter);

    // cout << myLetter << endl;

    int number = 1;

    cin >> number;

    while(cin.fail()) {
        cin.clear();
        cin.ignore(12031221312, '\n');
        cin >> number;
        
    }

    // if(cin.fail()) {
    //     cout << "Invalid input. Please enter a number." << endl;
    // } else {
        cout << number << endl;
    // }

    return 0;
}