#include<iostream>
using namespace std;

int main () {
	cout << "Name: Castillo, John Kenneath G." << endl;
	cout << "Section: CPE11S1" << endl;
	
	//Local Variables
	int x = 10, y = 3, sum = 0, product = 0, difference = 0, remainder = 0;
	float qoutient = 0;
	
	//Formula
	sum = x + y;
	product = x * y;
	difference = x - y;
	remainder = x % y;
	qoutient = x /(double)y;
	
	cout << "Please type two integers" << endl;
	cout << "Enter the value of x" << endl;
	cin>>x;
	cout << "Enther the value of y" << endl;
	cin>>y;
	
	//Printing Results
	cout << "Answers" << endl;
	cout << "Sum = " << sum << endl;
	cout << "Product = " << product << endl;
	cout << "Difference = " << difference << endl;
	cout << "Qoutient = " << qoutient << endl;
	cout << "Remainder = " << remainder << endl;
	
	cout << "Algorithim to get the sum, difference, product, qoutient, remainder  \n" << endl;
	
	return 0;

}

