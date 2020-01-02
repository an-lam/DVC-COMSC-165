#include <iostream>
using std::cout;

#include <string>
using std::string;

struct TimeOfDay
{
  int hour;
  int minute;
  int second;
  int milis;
  string day;
};

int main( )
{
  string mystr = "THis is a random string ...............";
  string mystr2 = "very long string ========================";
  string bigstr = mystr + mystr2;
  
  // notice how \" is used inside a quoted literal to represent a "
  cout << "The data type \"int\" uses " << sizeof(int) << " bytes of memory\n";
  cout << "The data type \"double\" uses " << sizeof(double) << " bytes of memory\n";
  cout << "The data type \"char\" uses " << sizeof(char) << " bytes of memory\n";
  cout << "The data type \"bool\" uses " << sizeof(bool) << " bytes of memory\n";
  cout << "The data type \"string\" uses " << bigstr.length() << " bytes of memory\n";
  cout << "The data type \"TimeOfDay\" uses " << sizeof(TimeOfDay) << " bytes of memory\n";

  int a[100]; // memory for 100 int values
  cout << "The array \"a\" uses " << sizeof(a) << " bytes of memory\n";
  
 }