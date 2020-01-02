#include <iostream>
using std::cin;
using std::cout;
using std::endl;


double mypow(double x, int n)
{
  if (x == 0)
    return 0;
  else if (n == 0)
    return 1;
  else if (n > 0)
    return x * mypow(x, n-1);
  else // x is non-zero and n is negative
    return 1.0/mypow(x, -n);
}


int main()
{
  double x;
  int n;
  cout << "Enter number x and power n: ";
  cin >> x >> n;
  
  cout << x << "^" << n << " = " << mypow(x, n) << endl;
  
  return 0 ;
}
