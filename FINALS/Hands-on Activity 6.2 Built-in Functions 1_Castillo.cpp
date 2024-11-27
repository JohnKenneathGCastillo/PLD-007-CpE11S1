#include <iostream>
#include <cstdlib>
using namespace std;

// Function to compute the area of a cube
double cubeArea(double side) {
    return side * side * side;
}

int main() {
    double side;
    cout << "Enter the side length of the cube: ";
    cin >> side;

    cout << "The area of the cube is: " << cubeArea(side) << endl;
    return 0;
}

