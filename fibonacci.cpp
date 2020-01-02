#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int fib(int n)
{
  int val = 0;

  //cout << "-> enter Fib: n = " << n << endl;
  if (n == 0)
    val = 0;
  else if (n == 1)
    val = 1;
  else
    val = fib(n - 1) + fib(n - 2);

  //cout << "<- exit Fib: n = " << n << endl;
  return val ;
}


int main()
{
  int num;
  cout << "Please enter a number to calculate Fibonacci sequence: " ;
  cin >> num;
  
  cout << "Fibonacci sequence: " << num << endl;
  for(int count=0; count < num; count++)
    cout << fib(count) << ", ";

  cout << fib(num) << endl ;
  return 0 ;
}
