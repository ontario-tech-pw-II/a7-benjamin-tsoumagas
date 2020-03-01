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
		Account::setBalance(0.00);
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
	double interest = (interestRate * Account::getBalance());
} 
void SavingsAccount::display(ostream & os) const
{
	// your code
	cout << "Account type: Saving" << endl;
	cout << "Balance: $" << Account::getBalance() << endl;
	cout << "Interest Rate (%): " << (interestRate * 100) << ".00" << endl;
}
