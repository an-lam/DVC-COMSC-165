#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <algorithm>
using std::swap;

void swapStrings(char [], char []);

int main()
{
  char hello[100] = "Hello"; // capacity to store a 99-length string
  char prog[] = "Programming with C Strings is... fun!"; // capacity for equal or lesser-length string
  
  for (int i = 0;; i++)
  {
	  if (hello[i] == 0) break;
	  cout << hello[i];
  }
  
  cout << "Before swap: \n hello = '" << hello << "'" << endl;
  cout << "prog = '" << prog << "'" << endl;
  swapStrings(hello, prog);
  cout << "\nAfter swap: \n hello = '" << hello << "'" << endl;
  cout << "prog = '" << prog << "'" << endl;
}

/*
NOTE: char array is passed by reference
*/
void swapStrings(char a[], char b[]) // "a" and "b" are aliases for arrays declared in main
{
  // swap char.s until a null gets swapped (when end of shorter-length string is reached)
  int index; // so it will be available after the for-loop
  for (index = 0;; index++)
  {
    swap(a[index], b[index]); // swap even if it's a null terminator
    if (a[index] == 0 || b[index] == 0) break; // done with this part after a null gets swapped
  }
  if (a[index] == 0 && b[index] == 0) return; // nothing more to do

  // if "a" is shorter than "b", concatenate the rest of "b" to the end of "a"
  // This is the new b[index] after swap (old a[index])
  if (b[index] == 0) // then the end of "a" was reached -- its null got swapped to "b"
  {
	cout << "in b[index] == 0, index = " << index << endl;
    for (index = index + 1;; index++) // starting after the swapped null
    { 
      a[index] = b[index]; // expect "a" to have enough capacity for this!
      if (b[index] == 0) break; // quit after b's null gets copied
    } 
  }
  else // then the end of "b" was reached -- concatenate to "b" 
  {
	cout << "in else of b[index] == 0 " << endl;
    for (index = index + 1;; index++) // starting after the swapped null
    {
      b[index] = a[index]; // expect "b" to have enough capacity for this!
      if (a[index] == 0) break; // quit after b's null gets copied
    } 
  }
}