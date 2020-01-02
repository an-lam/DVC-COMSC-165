#include <iostream>
#include <string>
using namespace std;

class Base
{
   public:
     int   baseNum ;

     string getDesc()
     {
        return "I am a Base" ;
     }
     virtual string changeMe()
     {
        return "Base" ;
     }
};

class NewBase : public Base
{
  public:
     string changeMe() 
     {
        return "NewBase" ;
     }
};

void print(Base & b)
{
     cout << b.getDesc() << endl ;
     cout << b.changeMe() << endl ;
}

int main()
{
  Base b1 ;
  print( b1 ) ;
  NewBase b2 ;
  cout << b2.getDesc() << endl ;
  b2.baseNum = 10 ;
  cout << b2.baseNum << endl ;
  print( b2 ) ;
  return 0;
}