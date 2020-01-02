#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//#include <cstring>

void strcmp(char *, char *);

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
  
  char c[100] = "C++ programing";
  char d[] = "is easy.";
  // Using strcat
  strcat(c, d);
  cout << "c = " << c << endl;
  
  // strncat(c, d, n);
  // Appends the first num characters of source to destination, plus a terminating
  //  null-character. If the length of the C string in source is less 
  // than num, only the content up to the terminating null-character is copied.
  
  char e[] = "olleh";
  reverseString(e);
   
  return 0;
}

bool strcmp(char *str1, char *str2)
{
	int i = 0;
	bool same = false;
	
	// same char and not null, keep counting
	// and stop when 
	while (str1[i] == str2[i] && str1[i] && str2[i])
	{
		i++;
	}
	
	// same length (both terminated with 0)
	if (i > 0 && !str1[i] && !str2[i])
		same = true;
	
	return same;	
}