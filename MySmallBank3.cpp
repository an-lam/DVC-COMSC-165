#include <iostream>
using namespace std;
#include "BankAccount2.h"

#include "BankAccount2.h"

int main()
{
        cout << "Welcome to my small bank." << endl;
		BankAccount  acct;
		acct.deposit(100);
		acct.print();
		acct.getId();
		
		BankAccount acct2(19999999);

		acct.withdraw(20);
		acct.print() ;
		
		SavingAccount savAcct[5];
		savAcct[0].deposit(50);
		savAcct[0].print() ;
		
		cout << "Thank you for using my bank." << endl;
		
        return 0 ;
}

