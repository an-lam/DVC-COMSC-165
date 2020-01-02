#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main( )
{
  string a = "Hello";
  string b = "Hello";
  if (a == b)
    cout << "They are the same\n";
  else if (a < b)
    cout <<  "a: " << a << " comes before b:" << b << endl;
  else // a > b
    cout << "a comes after b\n"; 
	
  return 0;
}