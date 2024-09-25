#include <iostream>
using namespace std;

int main()
{
	//create a c++ program to determine if alphabet is vowel or consonant
	char c;
	
	cout<<"Enter the character:";
	cin>>c;
	
	switch(c)
	{
		case 'a':
			cout<<"vowel";
		break;
		
		case 'A':
			cout<<"vowel";
		break;
		
		case 'e':
			cout<<"vowel";
		break;
		
		case 'E':
			cout<<"vowel";
		break;
		
		case 'i':
			cout<<"vowel";
		break;
		
		case 'I':
			cout<<"vowel";
		break;
		
		case 'o':
			cout<<"vowel";
		break;
		
		case 'O':
			cout<<"vowel";
		break;
		
		case 'u':
			cout<<"vowel";
		break;
		
		case 'U':
			cout<<"vowel";
		break;
		
		default:
			{
				cout<<"consonant";
				break;
				
			}
	}
	
	return 0;
}
