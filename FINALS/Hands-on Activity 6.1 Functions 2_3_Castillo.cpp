#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Function declarations
double dollarsToPesos(double dollars);
double pesosToDollars(double pesos);

int main() {
    double amount;
    char choice;

    cout << "Enter 'D' to convert Dollars to Pesos or 'P' for Pesos to Dollars: ";
    cin >> choice;

    if (choice == 'D' || choice == 'd') {
        cout << "Enter amount in Dollars: ";
        cin >> amount;
        cout << "Amount in Pesos: " << dollarsToPesos(amount) << endl;
    } else if (choice == 'P' || choice == 'p') {
        cout << "Enter amount in Pesos: ";
        cin >> amount;
        cout << "Amount in Dollars: " << pesosToDollars(amount) << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

double dollarsToPesos(double dollars) {
    return dollars * 20; // Example conversion rate
}

double pesosToDollars(double pesos) {
    return pesos / 20; // Example conversion rate
}

