#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

int main() {
    int num1, num2;
    char operation;
    char continueChoice;

    do {
        cout << "Enter the first integer: ";
        while (!(cin >> num1)) {
            cout << "Invalid input. Please enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Enter the second integer: ";
        while (!(cin >> num2)) {
            cout << "Invalid input. Please enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "Choose an operation (+, -, *, /): ";
        cin >> operation;

        switch (operation) {
            case '+':
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case '/':
                if (num2 != 0)
                    cout << "Result: " << divide(num1, num2) << endl;
                else
                    cout << "Error: Division by zero is not allowed!" << endl;
                break;
            default:
                cout << "Invalid operation!" << endl;
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> continueChoice;
    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}

// Function definitions
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
double divide(int a, int b) { return static_cast<double>(a) / b; }

