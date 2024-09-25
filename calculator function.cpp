#include <iostream>
using namespace std;

int main()
{
	//create a c++ program that applies a calculator function
	char c;
	
	cout<<"Enter the Calculator function:";
	cin>>c;
	
	switch(c)
	{
		case '+':
			cout<<"addition";
		break;
		
		case '-':
			cout<<"subtraction";
		break;
		
		case '*':
			cout<<"multiplication";
		break;
		
		case '/':
			cout<<"divition";
		break;
		
		default:
			{
				cout<<"not a calculator function";
				break;
			}
		
		
	}
	
	return 0;
	
}
