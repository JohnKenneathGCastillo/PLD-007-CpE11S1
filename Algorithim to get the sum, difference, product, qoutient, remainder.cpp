#include<iostream>
using namespace std;

int main () {
	cout << "Algorithim to get the sum, difference, product, qoutient, remainder \n" << endl;
	//Local Variables
	int x = 5, y = 2, sum = 0, product = 0, difference = 0, remainder = 0;
	float qoutient = 0;
	
	//Formula
	sum = x + y;
	product = x * y;
	difference = x - y;
	remainder = x % y;
	qoutient = x /(float)y;
	
	//Printing Results
	cout << "Sum = " << sum << endl;
	cout << "Product = " << product << endl;
	cout << "Difference = " << difference << endl;
	cout << "Qoutient = " << qoutient << endl;
	cout << "Remainder = " << remainder << endl;
	
	return 0;
}

