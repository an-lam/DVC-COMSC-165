#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
   string pgmName   = argv[0] ;
   string arg1;

   cout << "argc = " << argc << endl;
   
   if (argc > 1)
     arg1 = argv[1] ;
   else
     arg1 = "Not given" ;

   cout << "PROGRAM: " << pgmName << endl;
   cout << "argv[1]: " << arg1 << endl;
   return 0;
}