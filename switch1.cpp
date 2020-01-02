#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <cstdlib>

int main( )
{
  string buf; // to use as an input buffer

  // ask the user how many days they studied last week
  int daysOfStudy;
  cout << "How many days did you study last week? [0-7]: ";
  cin >> buf; 
  daysOfStudy = atoi(buf.c_str());

  // say something about it
  switch (daysOfStudy)
  {
    case 0:
    {
      cout << "Really? You did not study at all?\n";
      break;
    }
    case 1: case 2: case 3:
    {
      cout << daysOfStudy << " is good, but I was hoping for 4 or more.\n";
      break; 
    }
    case 4: case 5: case 6:
    {
      cout << "Good for you! Now try for " << (daysOfStudy + 1) << endl;
      break;
    }
    case 7:
    {
      cout << "Whoa! You are really into this stuff!\n";
      break;
    }
    default:
    {
      cout << "Hmm... There aren't that many days in a week: " << daysOfStudy << endl;
      break;
    }
  }
  
  return 0;
}