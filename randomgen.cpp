#include <iostream>
using std::cout;

#include <cstdlib>
#include <ctime>

int main( )
{
  // Input seed into random generator
  // Without the seed, rand generates same number every run
  srand(time(0));  // input seed using time
  rand();

  // simulate 6-sided dice rolls
  int lowEnd = 1; // smallest value to expect, as in a dice roll
  int highEnd = 6; // largest value to expect, as in a dice roll

  cout << "Roll 2 dice 10 times in the main loop\n";
  
  for (int i = 0; i < 10; i++) // roll 2 dice 10 times in the main loop
  {
    int dice1Result = lowEnd + (rand() % (highEnd - lowEnd + 1));
    int dice2Result = lowEnd + (rand() % (highEnd - lowEnd + 1));
    cout << (dice1Result + dice2Result) << ' '; // a number and a space
  }
  cout << "\nDone!\n"; // skip to the next line and say "done"
}