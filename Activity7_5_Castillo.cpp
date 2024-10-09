#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    float radius, length, width, base, height, side;

    do {
        cout << "\nArea Calculation Menu:\n";
        cout << "1) Circle\n";
        cout << "2) Rectangle\n";
        cout << "3) Triangle\n";
        cout << "4) Square\n";
        cout << "5) Exit\n";
        cout << "Select an option (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: 
                cout << "Enter radius: ";
                cin >> radius;
                cout << "Area of Circle = " << fixed << M_PI * radius * radius << endl; 
                break;
            case 2: 
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;
                cout << "Area of Rectangle = " << length * width << endl;
                break;
            case 3: 
                cout << "Enter base: ";
                cin >> base;
                cout << "Enter height: ";
                cin >> height;
                cout << "Area of Triangle = " << 0.5 * base * height << endl;
                break;
            case 4: 
                cout << "Enter side length: ";
                cin >> side;
                cout << "Area of Square = " << side * side << endl;
                break;
            case 5: 
                cout << "Program ended.\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

