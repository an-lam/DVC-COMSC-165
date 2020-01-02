#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstring>

int main()
{
  char a[100] = "Hello"; // a C string of length 5 with capacity 100
  int indexOfNull = 0; // to be the index of the (first) null terminator in "a"
  for (; a[indexOfNull] != 0; indexOfNull++)
	  ; // finds null terminator

  char b[] = "World"; // length 5, capacity 6
  for (int i = 0;; i++, indexOfNull++)
  {
    a[indexOfNull] = b[i]; // copy the char even if it's the null terminator
    if (b[i] == 0) break; // quit after copying the null terminator
  }

  cout << " a = " << a << endl;

  char c[100] = "C++ programming";
  char d[] = "is easy.";
  // Using strcat
  char c1[2];
  strcat(c1, d);
  cout << "c1 = " << c1 << endl;

  //strncat(c, d, n);
  // Appends the first num characters of source to destination, plus a terminating
  //  null-character. If the length of the C string in source is less
  // than num, only the content up to the terminating null-character is copied.


  return 0;
}
