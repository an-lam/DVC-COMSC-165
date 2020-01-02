#include <iostream>
using std::cout;
using std::ios;

int main( )
{
  double gallonCost = 3.539; // dollars 
  double gallons = 10.501; // gallons 
  double cost = gallonCost * gallons; 

  cout.setf(ios::fixed); // apply formatting so the cost...
  cout.precision(2); // ...gets rounded to the nearest penny
  cout << "It costs " << cost;

  cout.unsetf(ios::fixed); // unapply formatting so the gallons...
  cout.precision(6); // show exact without being rounded
  cout << " for " << gallons << " gallons of gas.\n";
}