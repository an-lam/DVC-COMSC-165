#include <iostream>
using std::cout;
using std::endl;

int main( )
{
  // table columns of widths 2, 9, and 7, with gaps of 1 space between each
  cout << " x x-squared x-cubed\n";
  cout << "-- --------- -------\n";
 
  // for 1 through 20
  for (int i = 1; i <= 20; i++)
  {
    cout.width(2); // aligns under the "x" column heading
    cout << i << ' '; // includes the gap
 
    cout.width(9); // aligns units digit under the "d" in "x-squared"
    cout << (i * i) << ' '; // includes the gap
 
    cout.width(7); // aligns the units digit under the "d' in "x-cubed"
    cout << (i * i * i) << endl; 
  }
}