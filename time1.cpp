#include <iostream>
using std::cout;

#include <ctime>

int main( )
{
  int timeInSeconds = time(0);
  cout << "It's " << timeInSeconds << " seconds since the year 1969 ended.\n";
}