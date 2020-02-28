#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance )
{
	interestRate = (rate > 0) ? rate : 0;
}

double SavingsAccount::calculateInterest() {
	return getBalance() * interestRate;
}
void SavingsAccount::display(ostream & os) const
{
  double percentageRate = interestRate * 100;
	// Ensure that we have trailing 0s if needed for each output
  os.setf(ios::fixed);
  os.precision(2);
	os << "Account type: Saving" << '\n'
     << "Balance: $ " << getBalance() << '\n'
     << "Interest Rate (%): " << percentageRate << '\n';
}
