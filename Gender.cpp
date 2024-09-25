#include <iostream>
using namespace std;

int main()
{
	cout<<"Enter the Gender reveal color only"<<endl;
	//create a c++ program that applies that identify the gender
	char c;
	
	cout<<"Enter the color:";
	cin>>c;
	
	switch(c)
	{
		case 'p':
			cout<<"Female";
		break;
		
		case 'b':
			cout<<"Boy";
		break;
		
		default:
			{
				cout<<"not a gender reveal color";
				break;
			}
		
		
	}
	
	return 0;
	
}
