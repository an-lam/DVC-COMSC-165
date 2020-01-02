// identification comments code block
// Prof Burns
// Course Info
// Editor(s) used: Adobe Brackets
// Compiler(s) used: XCode

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::getline;

int main( )
{
  // identification output code block
  cout << "Prof Burns\n\n";
  cout << "Course Info\n";  
  cout << "Editor(s) used: Adobe Brackets\n";
  cout << "Compiler(s) used: XCode\n";
  cout << "File: " << __FILE__ << "\n"; 
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << "\n\n";

  // course "metrics"
  string course;
  int section;
  string term;
  
  cout << "Enter course: "; 
  cin >> course;
  
  cout << "Enter section: "; 
  cin >> section;
  cin.ignore(1000, 10);

  cout << "Term: ";
  getline(cin, term);
  
  cout << course << endl; 
}