#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal = 1000.00; 
    double rate = 0.05;
    int years = 10;

    cout << "Year\tAmount in Account\n";
    cout << "-----------------------\n";
    
    for (int n = 1; n <= years; ++n) {
        double amount = principal * pow(1 + rate, n);
        cout << n << "\t" << amount << endl;
    }

    return 0;
}