#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char * argv[])
{
   string fileName ;
   if (argc > 1)
     fileName = argv[1]; 
   else
   {
     cout << "Please enter the file name: " ;
     getline(cin, fileName) ;
   }
   cout << "DATA FILE: " << fileName << endl ; 

   ifstream  fin(fileName) ;

   while (!fin.eof())
   {
     double amount ;
     fin >> amount ;
     string desc ;
     getline(fin, desc) ;
     cout << "AMOUNT: " << amount << " DESC: " << desc << endl ;
   }
   return 0 ;
}