#include <iostream>
using namespace std;

bool multiple(int num, int x)
{
	return num % x ==0;
}

int main() 
{
	int num, x;
	cout << "Enter an integer:  ";
	cin >> num;
	cout << "Enter the interger to check  for multiple:  ";
	cin >> x;
	
	if (multiple(num, x))
	{
		cout << num << " is a multiple of " << x << endl;
	}
	else
	{
		cout << num << " is not a multiple of  " << x << endl;
	}
	
	return 0;
}
