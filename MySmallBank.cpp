#include <iostream>
using namespace std;
//#include "BankAccount2.h"
#include "BankAccount.h"

int main()
{
        cout << "Welcome to my small bank." << endl;
		BankAccount  acct; 
		acct.deposit(100);
		cout << acct.m_balance << endl;    // error
		cout << "from blance: " << acct.balance() << endl;
		acct.print();

		acct.withdraw(20);
		cout << "acct: ";
		acct.print() ;
		
		BankAccount yourAcct(200);
		yourAcct.deposit(50);
		cout << "yourAcct: ";
		yourAcct.print() ;
		
		BankAccount accts[10]; // array of BankAccount
        accts[0].deposit(500);
		cout << "accts[0]: ";
		accts[0].print();
		
		cout << "Thank you for using my bank." << endl;
		
        return 0 ;
}

