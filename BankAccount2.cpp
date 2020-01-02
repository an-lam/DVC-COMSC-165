#include <iostream>
#include "BankAccount2.h"
using namespace std;

BankAccount::BankAccount()
{
    m_balance = 0;
}

BankAccount::BankAccount(double initialBalance)
{
    m_balance = initialBalance ;
}

void BankAccount::setID(int id)
{
    m_id = id;
}

int BankAccount::getID() const
{
    return m_id;
}

bool   BankAccount::deposit(double amount)
{
	//m_trans_cnt++;
	//trans[m_trans_cnt].type = "Deposit";
	
    m_balance += amount ;
    return true;
}

bool     BankAccount::withdraw(double amount)
{
    m_balance  -= amount ;
    return true;
}

double   BankAccount::balance() const
{
    return ( m_balance ) ;
}

void     BankAccount::print() const
{
    cout << "Balance: " << m_balance << endl;
}

// Note: must call super class constructor in the initializer list
SavingAccount::SavingAccount(double initialBalance, int year, double rate) :
   BankAccount(initialBalance)
{
   // BankAccount(initialBalance);   doesn't work
   m_year_opened = year;
   m_interest_rate = rate;
}

void     SavingAccount::print() const
{
	// NOTE: all methods that are called here must also be "const".
	// Otherwise, compiler complains.
	//cout << BankAccount::m_id << endl; //compiling error if m_id is private
    cout << BankAccount::getID() << endl;
	BankAccount::print();
	cout << " Year opened: " << m_year_opened << "\t interest rate: "
            	<< m_interest_rate << endl;
}

void Checking::changeBalance(BankAccount &acct)
{
    acct.m_id = 99;// it works because Checking is a friend of BankAccount
}


