#include <iostream>
using std::cin;
using std::cout;
using std::endl;

long long factorial(int n)
//int factorial(int n)
{
  long long val = 0;

  cout << "-> enter factorial: n = " << n << endl;
	
  if (n == 1) 
    val = 1; // Base case
  else 
    val = n * factorial(n - 1); // recursion step

  cout << "<- exit factorial: n = " << n << endl;
  return val ;
}

int main()
{
  long long num ;
  cout << "Please enter a number: " ;
  cin >> num ;

  cout << num << "! : " << factorial(num) << endl;
  return 0;
}
