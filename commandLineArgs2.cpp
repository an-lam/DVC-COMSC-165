#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
   string pgmName   = argv[0] ;

   cout << "PROGRAM: " << pgmName << endl;

   cout << "Number of command line arguments: " << argc << endl;

   /* Using the standard for loop */
   for(int count=0; count < argc; count++)
     cout << "Standard loop - Argument #" << count << ": " << argv[count] << endl;

   /* Using the range-based for loop */
   vector<string> arguments(argv, argv + argc);
   for(string & oneArgument: arguments)
     cout << "Range-based loop - Argument: " << oneArgument << endl;

   return 0;

}
