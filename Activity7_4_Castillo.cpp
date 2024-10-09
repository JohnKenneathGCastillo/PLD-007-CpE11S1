#include <iostream>
using namespace std;

int main() {
    double value, result;
    int choice;

    do {
        cout << "\nConversion Menu:\n";
        cout << "1) cm to inches\n";
        cout << "2) inches to cm\n";
        cout << "3) feet to meters\n";
        cout << "4) meters to feet\n";
        cout << "5) Exit\n";
        cout << "Select a conversion (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter value: ";
            cin >> value;

            switch (choice) {
                case 1:
                    result = value * 0.393701; // cm to inches
                    cout << value << " cm = " << fixed << result << " inches\n";
                    break;
                case 2:
                    result = value * 2.54; // inches to cm
                    cout << value << " inches = " << result << " cm\n";
                    break;
                case 3:
                    result = value * 0.3048; // feet to meters
                    cout << value << " feet = " << result << " meters\n";
                    break;
                case 4:
                    result = value * 3.28084; // meters to feet
                    cout << value << " meters = " << result << " feet\n";
                    break;
            }
        }
    } while (choice != 5);

    cout << "Program ended.\n";
    return 0;
}

