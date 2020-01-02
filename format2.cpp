#include <iostream>
using std::cout;
using std::ios;

int main( )
{
  double pi = 3.14159365;
  cout << "pi = " << pi << " without ios::fixed\n"; // see 6 total digits
 
  cout.setf(ios::fixed); // apply formatting from now on
  cout << "pi = " << pi << " with ios::fixed set\n"; // see 6 decimal digits 
 
  cout.unsetf(ios::fixed); // turn off formatting from now on
  cout << "pi = " << pi << " with ios::fixed now unset\n"; // back to 6 total
}