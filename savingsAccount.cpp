#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	// your code
	
	if (rate >= 0.00){
		interestRate = rate;
	}
	else{
		interestRate = 0.00;
	}
}

double SavingsAccount::calculateInterest() {
	// your code
	return interestRate * Account::getBalance();
} 
void SavingsAccount::display(ostream & os) const
{
	// your code
	os.precision(2);
	os << fixed;
	os << "Account type: Saving" << endl;
	os << "Balance: $" << Account::getBalance() << endl;
	os << "Interest Rate (%): " << (interestRate * 100) << endl;
}
