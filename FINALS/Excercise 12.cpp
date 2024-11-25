#include <iostream>
#include <String>
#include <cstdlib>
using namespace std;

int main()
{
	string str = "123";
	int num = atoi(str.c_str()); //convert string to integer
	cout << "Converted number: " << num << endl;
	return 0;
}
