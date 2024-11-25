#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int* ptr = (int*) malloc(sizeof(int)); //Dynamically Allocate memory
	if (ptr != NULL){
		*ptr = 10;
		cout << "Value: " << *ptr << endl;
		free(ptr); //Free Allocate memory
	}
	return 0;
}
