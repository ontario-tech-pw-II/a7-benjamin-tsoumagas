#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>

using namespace std;
   
class Account{
	private:
		double balance; // data member that stores the balance

	protected:
		double getBalance() const; // return the account balance
		void setBalance( double ); // sets the account balance

		public:
		Account( double = 0.0); // constructor initializes balance
	
		virtual void credit(double);

		virtual bool debit(double);

		virtual void display(ostream &) const = 0;
		//by adding the =0 we denote that this function is a pure virtual function
		//pure virtual = not defined in base, must be defined in derived class
		//abstract classes have one pure virtual function
};

#endif