#include <iostream>
using namespace std;

#include <string>
using namespace std;

class Item
{
	private:
	    int m_id;
		string *m_pDesc;
		
	public:
	Item(int id, string desc)
	{                   
	    cout << "\n Constructing an Item object: " << desc << endl;
		m_id = id;
		m_pDesc = new string(desc);
	}
	
	// Default destructor
	~Item()
	{    
	    cout << "In destructor, freeing object with description: " << *m_pDesc << endl;
	    delete m_pDesc; 
	}

	string toString()
	{   return (*m_pDesc);
	}
};

void printItem()
{
	Item book(876, "C++ book");
	cout << "In printItem: \n" << book.toString() << endl;
	cout << "Destructor is called when book goes out of scope\n";
}

int main(int argc, char *argv[])
{
   Item *car = new Item(123, "Toyota");
    //       (*car).toString()
   cout << "car = " << car->toString() << endl;
   
   cout << "\n Delete a dynamic object:\n";
   delete car;
   
   printItem();
      
   // Syntax error ?
   //{ 
   Item car2 = Item(345, "Lexus");
	  cout << " car2 = " << car2.toString() << endl;   
   //}
   
   cout << "\n End of main \n";
   
   return 0;
}