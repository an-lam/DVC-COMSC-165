#ifndef BANKACCOUNT3_H 
#define BANKACCOUNT3_H 

// To use Exception
#include <stdexcept>
using namespace std;

#include <string>

// User-defined exception
class BankAccountException: public runtime_error
{
	private:
	  string m_err;
	  
    public:
      BankAccountException();
	  
	  // Initializer: call superclass'constructor
      BankAccountException(string errMsg) : runtime_error(errMsg)
      {
		  m_err = errMsg;
      }
	  
      string why() const;
};

struct Transaction
{
	float amount;
	string type;
	//....
}

class BankAccount
{
    //private:
	protected:
         int         m_id ;
		 Transaction  trans[100];
		 int trans_size; 
		
	protected:
         double      m_balance ;

     public:
	    BankAccount() ;
		BankAccount(double initialBalance);
        bool     deposit(double amount);
        bool     withdraw(double amount);
		bool     compare(BankAccount bnkobj);
        double   balance();
		void     print() const ;
};

class SavingAccount : public BankAccount
{
     private:
         int         m_year_opened ;
         double      m_interest_rate;

     public:
	    SavingAccount();
		SavingAccount(double, int, double);
		void     print() const ;  // Override super's class method

};

#endif
