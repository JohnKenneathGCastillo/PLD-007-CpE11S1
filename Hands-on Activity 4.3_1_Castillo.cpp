#include <iostream>
using namespace std;

int main() 
{
  int day;
  string daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  
  cout << "Enter a number (0-6): ";
  cin >> day;
  
  if (day >+ 0 && day < 7) 
  {
  	cout << daysOfWeek[day] << endl;

  }
  else 
  {
  	cout << "Error, no such day." << endl;
  }
  
  return 0;
}
