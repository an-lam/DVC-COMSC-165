#include <algorithm>
using std::max;
using std::min;

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main( )
{
  int a = 100;
  int b = 200;
  cout << "The larger of {" << a << ", " << b << "} is " << max(a, b) << endl;

  string h = "Hello";
  string g = "Goodbye";
  cout << min(h, g) << " comes before " << max(h, g) << " in the dictionary\n"; 
 
  double x = 123.345;
  double y = x / 2;
  cout << max(x, y) << " is greater than " << min(x, y) << endl;
}