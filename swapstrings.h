#include <algorithm>
using std::swap;

void swapStrings(char[ ], char[ ]);

int main()
{
  char h[100] = "Hello"; // capacity to store a 99-length string
  char p[ ] = "Programming with C Strings is... fun!"; // capacity for equal or lesser-length string
  swapStrings(h, p);
}

void swapStrings(char a[ ], char b[ ]) // "a" and "b" are aliases for arrays declared in main
{
  // swap chars until a null gets swapped (when end of shorter-length string is reached)
  int index; // so it will be available after the for-loop
  for (index = 0;; index++)
  {
    swap(a[index], b[index]); // swap even if it's a null terminator
    if (a[index] == 0 || b[index] == 0) break; // done with this part after a null gets swapped
  }
  if (a[index] == 0 && b[index] == 0) return; // nothing more to do

  // if "a" is shorter than "b", concatenate the rest of "b" to the end of "a"
  if (b[index] == 0) // then the end of "a" was reached -- its null got swapped to "b"
  {
    for (index = index + 1;; index++) // starting after the swapped null
    {
      a[index] = b[index]; // expect "a" to have enough capacity for this!
      if (b[index] == 0) break; // quit after b's null gets copied
    } 
  }
  else // then the end of "b" was reached -- concatenate to "b" 
  {
    for (index = index + 1;; index++) // starting after the swapped null
    {
      b[index] = a[index]; // expect "b" to have enough capacity for this!
      if (a[index] == 0) break; // quit after b's null gets copied
    } 
  }
}