/*********************************************************************
* Name:  Joe Student
* Project 1: Calculate change
* Editor(s) used: Notepad++
* Compiler(s) used: Visual Studio
**********************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Please make sure you include <string> in Linux or Mac
// because your code won't compile on Windows if you forgot
#include <string>
using std::string;

int main( )
{
  double x;
  //float x;
  
  x = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
  cout << " x = " << x << endl;
  // What's wrong with this 'if'?
  if (x == 1.0)
  {
	cout << " x == 1.0 is true" << endl;
  }
  else
    cout << " x == 1.0 is false" << endl;

  if (x > 0.9999 && x < 1.00001)
	cout << "\n Second if (true): x is 1.0 " << endl;
  else
    cout << "\n Second if (false): x is not 1.0 " << endl;


  return 0;
}