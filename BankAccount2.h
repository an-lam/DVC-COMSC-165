#ifndef BANKACCOUNT2_H 
#define BANKACCOUNT2_H 


class BankAccount
{
    private:
	//protected:
         int         m_id ;
		 //int         my_id;
		
	protected:
         double      m_balance;

     public:
	    BankAccount() ;
		BankAccount(double initialBalance);
		void setID(int id);
		int  getID() const;
        bool     deposit(double amount);
        bool     withdraw(double amount);
        double   balance() const;
		void     print() const;
		//~BankAccount();   // destructor
		
	friend class Checking;  // can access private data members
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

class Checking
{
	public:
	void changeBalance(BankAccount &);
};

#endif
