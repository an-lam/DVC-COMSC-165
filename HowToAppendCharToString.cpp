/**
 *   Show 3 different ways to append a character to a string
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
   char ch = 'A', nextCh = 'B', lastCh = 'C' ;
   string msg = "Hello " ;

   double price = 12.45;
   
   // msg += price;
   // msg = msg + to_string(price);
   msg += to_string(price);
   cout << msg << endl;
   
   msg += ch ;
   cout << msg << endl ;

   msg.append(1, nextCh) ;
   msg.append(4, nextCh);
   cout << msg << endl;

   msg.push_back(lastCh) ;
   cout << msg << endl ;

   return 0;
}