#include <iostream>
using namespace std;

int main() {
    char ch;

    while (true) {
        cout << "Enter the symbol (or '*' to quit): ";
        cin >> ch;

        if (ch == '*') {
            break; 
        }

        if (ch >= 'a' && ch <= 'z') {
            cout << ch << " is a lowercase letter." << endl;
        } else {
            cout << ch << " is not a lowercase letter." << endl;
        }

        if (ch >= 'A' && ch <= 'Z') {
            cout << ch << " is an uppercase letter." << endl;
        } else {
            cout << ch << " is not an uppercase letter." << endl;
        }

        char upperCh = (ch >= 'a' && ch <= 'z') ? ch - 32 : ch; 
        cout << ch << " converted to uppercase is " << upperCh << endl;

        char lowerCh = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch; 
        cout << ch << " converted to lowercase is " << lowerCh << endl;
    }

    return 0;
}

