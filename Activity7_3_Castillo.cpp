#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double baseCost = 5.00;
    const double additionalCostPer100g = 2.00;
    const int baseWeightLimit = 300;
    const int maxWeightLimit = 1000;

    double weight;
    cout << "Enter the weight of the parcel in grams (up to 1000g): ";
    cin >> weight;

    if (weight <= 0 || weight > maxWeightLimit) {
        cout << "Invalid weight." << endl;
        return 1;
    }

    double totalCost = baseCost + (weight > baseWeightLimit ? ceil((weight - baseWeightLimit) / 100.0) * additionalCostPer100g : 0);
    cout << "The total cost for sending the parcel is: P" << totalCost << endl;

    return 0;
}

