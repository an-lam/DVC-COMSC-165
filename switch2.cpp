#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

#include <cstdlib>

int main( )
{
  // ask the user what grade they got on the exam
  char myGrade; // A, B, C, D, F
  // try 
  //string myGrade;
  cout << "What grade did you get on the exam? [A, B, C, D, F]: ";
  cin >> myGrade; // do NOT use string buffers for chars

  // say something about it
  switch (myGrade)
  {
	case 97:
    case 'A':
    {
      cout << "Excellent!\n";
      break;
    }
    case 'B': case 'C':
    {
      cout << "Well, at least you passed.\n";
      break; 
    }
    case 'D': case 'F':
    {
      cout << "Hmm... I was hoping for better!\n";
      break;
    }
    default:
    {
      cout << "What? There is no grade " << myGrade << "!\n";
      break;
    }
  }
  
  return 0;
}