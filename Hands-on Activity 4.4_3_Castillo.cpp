#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2, str3, str4;
    cout << "Enter four integers as strings: " << endl;
    cin >> str1 >> str2 >> str3 >> str4;

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    for (int i = 0; i < str1.length(); i++) {
        num1 = num1 * 10 + (str1[i] - '0');
    }
    for (int i = 0; i < str2.length(); i++) {
        num2 = num2 * 10 + (str2[i] - '0');
    }
    for (int i = 0; i < str3.length(); i++) {
        num3 = num3 * 10 + (str3[i] - '0');
    }
    for (int i = 0; i < str4.length(); i++) {
        num4 = num4 * 10 + (str4[i] - '0');
    }

    int total = num1 + num2 + num3 + num4;
    cout << "The total is: " << total << endl;

    return 0;
}

