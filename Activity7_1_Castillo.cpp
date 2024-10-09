#include <iostream>
using namespace std;

int main() {
    int accountNumber;
    double balance, charges, credits, limit, newBalance;
	

    while (true) {
        cout << "Enter account number (-1 to end): ";
        cin >> accountNumber;
        if (accountNumber == -1) {
            cout << "Program ends." << endl;
            break;
        }

        cout << "Enter beginning balance: ";
        cin >> balance;
        cout << "Enter total charges: ";
        cin >> charges;
        cout << "Enter total credits: ";
        cin >> credits;
        cout << "Enter credit limit: ";
        cin >> limit;

        newBalance = balance + charges - credits;

        cout << "\nAccount: " << accountNumber << endl;
        cout << "Credit limit: " << limit << endl;
        cout << "Balance: " << newBalance << endl;

        if (newBalance > limit) {
            cout << "Credit Limit Exceeded." << endl;
        } else {
            cout << std::endl;
        }
    }

    return 0;
}

