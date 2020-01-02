#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int square(int y);
int cube(int x);

int main()
{
  int i, i3;
  cout << "Please enter a number: ";
  cin >> i;
  
  cout << "Square of " << i << " is " << square(i) << '\n';
  
  i3 = cube(i);
  cout << "Cube of " << i << " is " << i3 << '\n';
  
}

int square(int x)
{
  return x*x;
}

int cube(int x)
{
  return x*x*x;
}