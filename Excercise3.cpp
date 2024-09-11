#include <iostream>
using namespace std;

int main()
{
	//Name, Subject/Section and Date
	cout <<"Castillo, John Kenneath"<< endl;
	cout <<"CPE007/CPE11S1                11/09/2024"<< endl;
	float grade;
	
  //grading system
  cout <<"Grading System:"<< endl;
  cout <<"Input your grade:";
  cin>>grade;


  if( grade >=94 && grade <= 100)
  {
    cout <<"Excelent"<< endl;
    cout <<"Equivalent Grade = 1.00"<< endl;
    cout <<"CONGRATULATIONS YOU HAVE PASSED"<< endl;
  }

  else if(grade >=88.5 && grade <= 93.99)
  {
    cout <<"Superior"<< endl;
    cout <<"Equivalent Grade = 1.25"<< endl;
    cout <<"CONGRATULATIONS YOU HAVE PASSED"<< endl;
  }

  else if(grade >=83 && grade <= 88.49)
  {
    cout <<"Meritorious"<< endl;
    cout <<"Equivalent Grade = 1.50"<< endl;
    cout <<"CONGRATULATIONS YOU HAVE PASSED"<< endl;
  }

  else if(grade >=77.5 && grade <= 82.99)
  {
    cout <<"Very Good"<< endl;
    cout <<"Equivalent Grade = 1.75"<< endl;
    cout <<"CONGRATULATIONS YOU HAVE PASSED"<< endl;
  }

  else if(grade >=72 && grade <= 77.49)
  {
    cout <<"Good"<< endl;
    cout <<"Equivalent Grade = 2.00"<< endl;
    cout <<"CONGRATULATIONS YOU HAVE PASSED"<< endl;
  }

  else if(grade >=65.5 && grade <= 71.99)
  {
    cout <<"Very Satisfactory"<< endl;
    cout <<"Equivalent Grade = 2.25"<< endl;
    cout <<"CONGRATULATIONS YOU HAVE PASSED"<< endl;
  }

  else if(grade >=61 && grade <= 65.49)
  {
    cout <<"Satisfactory"<< endl;
    cout <<"Equivalent Grade = 2.50"<< endl;
    cout <<"CONGRATULATIONS YOU HAVE PASSED"<< endl;
  }

  else if(grade >=55.5 && grade <= 60.99)
  {
    cout <<"Fair"<< endl;
    cout <<"Equivalent Grade = 2.75"<< endl;
    cout <<"CONGRATULATIONS YOU HAVE PASSED"<< endl;
  }

  else if(grade >=50 && grade <= 55.49)
  {
    cout <<"Passing"<< endl;
    cout <<"Equivalent Grade = 3.00"<< endl;
    cout <<"CONGRATULATIONS YOU HAVE PASSED"<< endl;
  }

  else if(grade >=0 && grade <= 49.99)
  {
    cout <<"Failed"<< endl;
    cout <<"Equivalent Grade = 5.00"<< endl;
    cout <<"DO YOUR BEST NEXT TIME"<< endl;
  }
  


return 0;

}
