#include <iostream>
using namespace std;

int main()
{
   int quantity = 10 ;
   cout << "post increment:" << quantity++ << endl;
   cout << "pre increment: " << ++quantity << endl;
   cout << "quantity = " << quantity   << endl;
   
   int sum = 100 + quantity++ ;
   int total = 100 + ++quantity ;
   cout << "sum = " << sum << endl;
   cout << "total = " << total  << endl;
   cout << "quantity = " << quantity   << endl;

   return 0;
}
