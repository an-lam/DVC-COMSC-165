// identification comments code block
// Name:   
// Course: CIST-004A
// Editor(s) used: Notepad++
// Compiler(s) used: Visual Studio

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <stdexcept>
using namespace std;

#include <exception>

#include <string>
using std::string;
using std::getline;

int main( )
{
  // course "metrics"
  string course;
  int section;
  string term;
  
  cout << "Enter course: "; 
  cin >> course;
  
  cout << "Enter section: "; 
  cin >> section;
  cin.ignore(100, '\n');

  cout << "Term: ";
  getline(cin, term);
  
  cout << "You entered: \n";
  cout << course << " " << section << " " << term << endl; 
  
  
  /*
  int x;
  
  try {
	 cout << "Enter an integer: ";
     cin >> x;
	 if (cin.fail())
		 throw runtime_error("invalid input");
	 
  }
  //catch (... &ex)
  catch (exception &ex)
  {
	  cout << ex.what() << endl;
  }
  */
  
  cout << "End of program \n";
}