#include <iostream>
using std::cout;
using std::endl;

void changeMyParam1(int );
void changeMyParam2(int *);
void changeMyParam3(int &);

int main( )
{
  int age = 10; // stored somewhere in computer memory
  changeMyParam2(&age); // sharing the memory location of "age"
  cout << "1. Here's \"age\" now! " << age << ". It's twenty-two!\n";

  age = 11;
  changeMyParam1(age);
  cout << "2. Here's \"age\" now! " << age << endl;

  changeMyParam3(age);
  cout << "3. Here's \"age\" now! " << age << endl;
}

void changeMyParam3(int &x)
{
  x = 99;
}

void changeMyParam2(int *ptr)
{
  *ptr = 22; // reset to 22 whatever int value that is located at "p"
}
void changeMyParam1(int x)
{
  x = 22;
}
