/*********************************************************************
* Name:  Winnie The Pooh
* Project 1: Calculate change
* Editor(s) used: Notepad++
* Compiler(s) used: Visual Studio
**********************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

double billsOrCoins(double, double);
string describe(double);

int main( )
{
  double owed, tender, change;
  string owed_buf, tender_buf;
  
  // Read in amount owed and tender
  cout << "Please enter purchase amount and tender: " << endl;
  cin >> owed_buf >> tender_buf;
  
  owed = atof(owed_buf.c_str);
  tender = atof(tender_buf.c_str);
  
  // Calculate change if there is change
  change = tender - owed;
  if (change > 0)
  { 
    // Print amount owed, change, and tender
    cout << "Purchase: $" << owed << "\t tender: $" << tender;
    cout << "\t change: $" << change <<endl;
  
    // Calculate and output change for each denomination
	owed = billsOrCoins(change, 100.00);  // for $100 bill
    owed = billsOrCoins(owed, 50.00);  // for $50 bill
    owed = billsOrCoins(owed, 20.00);    // for $20 bill
    owed = billsOrCoins(owed, 10.00);    // for $10 bill
    owed = billsOrCoins(owed, 5.00);     // for $5 bill
    owed = billsOrCoins(owed, 1.00);     // for $1 bill

    owed = billsOrCoins(owed, 0.25);   // for quarter coin 
	owed = billsOrCoins(owed, 0.10);  // for dime coin
	owed = billsOrCoins(owed, 0.05);  // for nickle coin
	owed = billsOrCoins(owed, 0.01);  // for penny coin
  }
  else 
  { 
    cout << "You don't have enough money." << endl;
  }
  
}

/**************************************************************************
* Purpose: Calculate the number of bills or coins, print result and return
* the remaining amount.
* Parameters:
*   owed (IN) - the amount owed
*   denom (IN) - the denomination bill or coin, for example 50.0, 20 or 0.25
*
* Return:  the remaining amount.
***************************************************************************/
double billsOrCoins(double owed, double denom)
{
  int n = 0;
  while (true)
  {
	// If amount owe is less than denomination, it's done.
	// Why can't we compare owe < denom?.  Try 15.98 and 50, it's wrong
	//if (owed < denom) break;
	//cout << "owed = " << owed << " denom = " << denom << endl;

    if (owed < (denom - 0.001)) break;
    owed -= denom;
    n++; // increment bill or coin count
  } 
  
  // If number of bills or coins > 1, append an "s" to description
  if (n > 1 )
    cout << n << describe(denom) << "s" << endl;
  else if (n == 1)
	cout << n << describe(denom) << endl;
	 
  return owed;
}


/**************************************************************************
* Purpose: create a string describing the number of bills or coins. 
* 
* Parameters:
*   denom (IN) - the denomination bill or coin, for example 50.0, 20 or 0.25
*
* Return:  the string describing 
***************************************************************************/
string describe(double denom)
{
  int cents = 0;
  int dollars = denom; // take only integer for easy conversion to string
  string words = "";
  
  if (dollars >= 1)
    words = " $" + std::to_string(dollars) + " bill";
  else 
  {
	cents = denom * 100;
	words = " " + std::to_string(cents) + "-cent coin";
  }

  return words;
}
