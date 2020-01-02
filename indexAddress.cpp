#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
  int x[10] = {82, -5, 68, 100};
  int *xPtr = x;
  //xPtr = &x; // &x[0]


  // Compiler calculates the address of x[1] by:
  // adding address x + sizeof(int)
  cout << "x[1] = " << x[1] << endl;
  cout << "*(x + 1) = " << *(xPtr + 1) << endl;

  // What is it? Syntax error?
  string a[] = {"This one I understand.",
                "Oh my gosh -- it works!"};
  // Algebra 2: Commutative property of addition
  //    a + b = b + a
  // first element:  a[0] = (address of a) + 0
  // second element: a[1] = (address of a) + 1 = 1 + (address of a)
  cout << "a[0] is " << a[0] << endl;
  cout << "1[a] is " << 1[a] << endl;
}
