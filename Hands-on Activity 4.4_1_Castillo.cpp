#include <iostream>
using namespace std;

int main() {
    char lowerChar = 'p';
    char upperChar = 'P';
    char digitChar = '5';
    char specialChar = '!';

    cout << "According to islower:\n";
    cout << lowerChar << " is a lowercase letter\n";
    cout << upperChar << " is not a lowercase letter\n";
    cout << digitChar << " is not a lowercase letter\n";
    cout << specialChar << " is not a lowercase letter\n\n";

    char upperChar2 = 'D';
    char lowerChar2 = 'd';
    char digitChar2 = '8';
    char specialChar2 = '&';

    cout << "According to isupper:\n";
    cout << upperChar2 << " is an uppercase letter\n";
    cout << lowerChar2 << " is not an uppercase letter\n";
    cout << digitChar2 << " is not an uppercase letter\n";
    cout << specialChar2 << " is not an uppercase letter\n\n";

    char lowerChar3 = 'u';
    char digitChar3 = '7';
    char specialChar3 = '$';
    char upperChar3 = 'L';

    cout << lowerChar3 << " converted to uppercase is " << (char)toupper(lowerChar3) << "\n";
    cout << digitChar3 << " converted to uppercase is " << digitChar3 << "\n";
    cout << specialChar3 << " converted to uppercase is " << specialChar3 << "\n";
    cout << upperChar3 << " converted to lowercase is " << (char)tolower(upperChar3) << "\n";

    return 0;
}

