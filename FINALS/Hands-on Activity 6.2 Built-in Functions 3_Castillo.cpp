#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

// Function to convert Fahrenheit to Celsius
double celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

// Function to convert Celsius to Fahrenheit
double fahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    cout << fixed << setprecision(2);

    // Header for the Celsius to Fahrenheit chart
    cout << "Celsius to Fahrenheit Chart:\n";
    cout << setw(10) << "Celsius" << setw(15) << "Fahrenheit" << endl;
    for (int c = 0; c <= 100; c += 10) {
        cout << setw(10) << c << setw(15) << fahrenheit(c) << endl;
    }

    cout << "\n";

    // Header for the Fahrenheit to Celsius chart
    cout << "Fahrenheit to Celsius Chart:\n";
    cout << setw(15) << "Fahrenheit" << setw(10) << "Celsius" << endl;
    for (int f = 32; f <= 212; f += 10) {
        cout << setw(15) << f << setw(10) << celsius(f) << endl;
    }

    return 0;
}

