#include <iostream>
#include <cmath>
using namespace std;

// Function declarations
double fahrenheitToCelsius(double fahrenheit);
double celsiusToFahrenheit(double celsius);

int main() {
    double temperature;
    char choice;

    cout << "Enter 'F' to convert Fahrenheit to Celsius or 'C' for Celsius to Fahrenheit: ";
    cin >> choice;

    if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << endl;
    } else if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

