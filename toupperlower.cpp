#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// For tolower() and toupper()
#include <cctype>

void toLowerCase(char[]);
void toUpperCase(char[]);

int main( )
{
  char a[100] = "Hell0";
  char b[] = "W01rld";
  toLowerCase(a); // and now it's "hello" 
  toUpperCase(b); // and now it's "WORLD"
  
  cout << "(after function call) a = " << a << endl;
  cout << "(after function call) b = " << b << endl;
}

void toLowerCase(char aCString[])
{
  for (int i = 0; aCString[i] != 0; i++)
    aCString[i] = tolower(aCString[i]);
}

void toUpperCase(char aCString[])
{
  // NOTE: passing array is 'pass-by-reference'
  for (int i = 0; aCString[i] != 0; i++)
    aCString[i] = toupper(aCString[i]);
}