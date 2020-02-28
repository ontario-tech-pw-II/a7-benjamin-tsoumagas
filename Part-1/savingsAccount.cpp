#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	// your code
	if (initialBalance >= 0.00){
		Account::setBalance(initialBalance);
	}
	else{
		balance = 0.00;
	}
	
	if (rate >= 0.00){
		interestRate = rate;
	}
	else{
		interestRate = 0.00;
	}
}

double SavingsAccount::calculateInterest() {
	// your code
	double interest = (interestRate * balance);
} 
void SavingsAccount::display(ostream & os) const
{
	// your code
	out << "Account type: Saving" << endl;
	out << "Balance: $" << Account::getBalance << endl;
	out << "Interest Rate (%): " << (interestRate * 100) << endl;
}
