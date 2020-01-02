#include <iostream>
#include <string>
using namespace std;

void change(int []);

int main()
{
  int numList[100] ;
  char gradeList[1000] ;
  double prices[50];
  string messages[10];
  
  numList[0]  = 123 ;
  numList[99] = 321 ;
  numList[5]  = 9 ;
  cin >> numList[1] ;

  gradeList[0] = 'A' ;
  prices[5] = 8.75 ;
  messages[3] = "PAGE NOT FOUND" ;

  int unitCounts[3] = {4, 5, 2} ;
  int classCounts[] = {101, 102, 103} ;

  char cppGrades[40] ;
  
  change(numList);
  cout << numList[0] << endl;

  return 0;
}

void change(int numList[])
{
	numList[0] = 99;
}