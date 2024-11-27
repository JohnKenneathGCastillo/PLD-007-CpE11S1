#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// Function to calculate the hypotenuse
double hypotenuse(double a, double b) {
    return sqrt((a * a) + (b * b));
}

int main() {
    double side1, side2;

    cout << "Enter the lengths of the two sides of the triangle:\n";
    cout << "Side 1: ";
    cin >> side1;
    cout << "Side 2: ";
    cin >> side2;

    cout << "The length of the hypotenuse is: " << hypotenuse(side1, side2) << endl;
    return 0;
}

