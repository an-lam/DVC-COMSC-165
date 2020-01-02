#include <iostream>
using std::cin;
using std::cout;

#include <cctype>

int main( )
{
  // the main loop starts here
  while (true)
  {
    // ask if we are there yet
    char thereYet;
    cout << "Are we there yet? [Y/N]: ";
    cin >> thereYet;

    // if so, stop asking
    if (toupper(thereYet) == 'Y') break; // an "exit condition"

    // otherwise complain lightly
    cout << "This is sure taking a long time!\n";
  }

  // the main loop's all done -- happy ending
  cout << "We're finally there (here?)\n";
}