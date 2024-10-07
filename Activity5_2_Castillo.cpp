#include <iostream>
using namespace std;

int main() {
    int age;
    double fare = 9.0;
    double discount;
     //fare and discounts for taking the bus
    cout << "HI. THANK YOU FOR TAKING THE BUS"<<endl;
    cout << "Please enter your age: ";
    cin >> age;

    if (age >= 60 ) { 
        discount = 0.10;
        fare -= fare * discount;
        cout << "You are a senior citizen. Your fare after discount is: " << fare << " pesos." << endl;
    } else if (age < 18) { 
        discount = 0.08; 
        fare -= fare * discount;
        cout << "You are a student. Your fare after discount is: " << fare << " pesos." << endl;
    } else {
        cout << "No discount applicable. Your fare is: " << fare << " pesos." << endl;
    }

    return 0;
}
