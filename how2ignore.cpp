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
  cin.ignore(100, '\n'); // comment this line out to see what happens

  cout << "Term: ";
  getline(cin, term);
  
  // Example of debug code
  cout<<__LINE__<<__FILE__<<endl;
  
  cout << "You entered: \n";
  cout << course << " " << section << " " << term << endl; 
  
  cout << "End of program \n";
}