#include <iostream>
using namespace std;

int main() {
    double gallonsUsed, milesDriven;
    double totalMiles = 0.0, totalGallons = 0.0;


    while (true) {
        cout << "Enter the gallons used (-1 to end): ";
        cin >> gallonsUsed;

        if (gallonsUsed == -1) {
            break;
        }

        cout << "Enter the miles driven: ";
        cin >> milesDriven;

        double milesPerGallon = milesDriven / gallonsUsed;
        cout << "The miles / gallon for this tank was " << milesPerGallon << endl;

        totalMiles += milesDriven;
        totalGallons += gallonsUsed;
    }

    if (totalGallons > 0) {
        double overallAverage = totalMiles / totalGallons;
        cout << "\nThe overall average miles/gallon was " << overallAverage << endl;
    } else {
        cout << "\nNo gallons were entered, cannot compute overall average." << endl;
    }

    return 0;
}

