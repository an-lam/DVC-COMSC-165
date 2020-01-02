#include <iostream>
#include <string>
using namespace std;

string mapToPhoneNum(string alphaPhoneStr)
{
   string ans = "" ;
   char *pPhoneStr = (char *) alphaPhoneStr.c_str() ;
   for ( ; *pPhoneStr != '\0'; pPhoneStr++)
   {
      switch (*pPhoneStr)
      {
         case 'A':
         case 'B':
         case 'C':  ans.append(1, '2'); break;
         case 'D':
         case 'E': 
         case 'F':  ans.append(1, '3'); break;
         case 'G': 
         case 'H':
         case 'I':  ans.append(1, '4'); break ;
         case 'J':  
         case 'K':
         case 'L':  ans.append(1, '5'); break ;
         case 'M': 
         case 'N': 
         case 'O':  ans.append(1, '6'); break ;
         case 'P': 
         case 'Q':
         case 'R': 
         case 'S':  ans.append(1, '7'); break ;
         case 'T':  
         case 'U':
         case 'V':  ans.append(1, '8'); break ;
         case 'W':  
         case 'X':
         case 'Y':
         case 'Z':  ans.append(1, '9'); break ;
         default:
                    ans.append(1, *pPhoneStr);
      }
   }
   return ans ;
}

int main()
{
  cout << mapToPhoneNum("800FLOWERS") << endl;
  cout << mapToPhoneNum("HELLO, WORLD!") << endl;
  cout << mapToPhoneNum("800DENTIST") << endl;
  cout << mapToPhoneNum("BYE123?") << endl;
  return 0 ;
}
