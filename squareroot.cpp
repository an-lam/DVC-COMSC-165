#include <iostream> // a C++ library code block
using std::cout;
using std::endl;

#include <cmath> // the C library code block

int main( )
{
  double x = 123.456;
  double squareRootOfX = sqrt(x);
  cout << "The square root of " << x << " is " << squareRootOfX << endl;
  
  // What's wrong with these statements?
  int y = 18;
  int sqRootOfY = sqrt(y);
  cout << "The square root of " << y << " is " << sqRootOfY << endl;
  
  double z = 5.0, exp = 3.0;
  double result = pow(z, exp);
  cout << z << " to the power of " << exp << " is " << result << endl;
  
}