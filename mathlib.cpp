#include <iostream>
using std::cout;
using std::endl;

//#include <cstdlib>
#include <cmath> // for fabs


int main( )
{
  int a = 100;
  int b = 200;
  int x = a - b; // should be -100
  int absoluteValueOfX = abs(x); // should be 100
  cout << "The absolute values of " << x << " is " << absoluteValueOfX << endl;
  
  double z = 90.7, y = 8982.98;
  double difference = z - y;
  double absDifference = abs(difference);
  cout << "The absolute values of " << difference << " is " << absDifference << endl;
  
  
  // Square root
  double d = 8.0;
  double squareRootOfX = sqrt(d);
  cout << "The square root of " << d << " is " << squareRootOfX << endl;
  
  int e = 8;
  double sqroot = sqrt(e);  // C++ 11 support int
  cout << "The square root of " << e << " is " << sqroot << endl;
  
  // pow
  // double p = pow(8.0, 0.534); // sqrt of 8
  double p = pow(2, 3);
  cout << "The power of 2^3 is " << p << endl;
  
}