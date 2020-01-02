#include <iostream>
using namespace std;
#include "BankAccount2.h"
//#include "BankAccount2.h"

int main()
{
        cout << "Welcome to my small bank." << endl;
		cout << "Instantiate acct \n";
		BankAccount  acct;
		acct.deposit(100);
		acct.print();
		acct.setID(9999);
		int id = acct.getID();
		cout << "New id: " << id << endl;
		//acct.m_id = 12334;
		
		cout << "\n Instantiate acct2(200) \n";
		BankAccount acct2(200);

		acct2.withdraw(20);
		acct2.print() ;
		
		cout << "\n Instantiate savAcct \n";
		SavingAccount savAcct(200, 2015, 4.5);
		savAcct.deposit(50);
		savAcct.print() ;
		
		cout << "Thank you for using my bank." << endl;
		
        return 0 ;
}

