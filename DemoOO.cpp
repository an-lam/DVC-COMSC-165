#include <iostream>
#include <string>
using namespace std;

void doSomething()
{
}

class Item
{
  private:
   string m_source;

  public:
   double m_price ;
   string m_desc ;

   Item()
   {
     m_price  = 0.0;
     m_desc   = "TEMP" ;
     m_source = "UNKNOWN" ;
     cout << "Constructor of the Item is called..." << endl;
   }
   Item(double price, string desc)
   {
     m_price = price ;
     m_desc  = desc ;
     m_source = "UNKNOWN" ;
   }

   void setSource(const string s)
   {
	   s = "abc";
      if (s.empty() == false)
        m_source = s ; 
   }
};

int main()
{
  int num = 0 ;
  cin >> num ;
  char grade1='A', grade2 = 'B' ;

  Item item1, item2 ;
  Item item3(1.88, "Movie") ;
  Item item4(-100, "Music") ;

  item1.m_price = 5.99 ;
  item1.m_desc  = "C++ book";
  // item1.m_source = "Barns and Noble" ;
  item1.setSource("Barns and Noble") ;
  item2.m_price = 2.75 ;
  item2.m_desc  = "a notebook" ;
  doSomething() ;
  return 0;
}