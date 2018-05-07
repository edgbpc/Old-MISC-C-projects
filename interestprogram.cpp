//This program will ask for the user's name, ask for the principal, interest rate, and times compounded
//it will calculate what the user's interest is and total savings
//it will display back to the user in a chart what the interest rate is, times compounded, 
//principal, interest earned, and total deposit.  Finally, it will display the users name along with what
//the user currently has deposited.

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
	//variables

	string UserName; 
	double Principal;
	double InterestRate;
	double TimesCompounded;
	double InterestEarned;
	double TotalDeposit;
	double DisplayInterestRate;

	//user inputs
	
	cout << "Please enter your first and last name" << endl;
	getline(cin, UserName);
	cout << "Please enter your principal" << endl;
	cin >> Principal;
	cout << "Please enter your interest rate as a decimal, for example 0.0425 for 4.25%" << endl;
	cin >> InterestRate;
	cout << "Please enter number of times compounded" << endl;
	cin >> TimesCompounded;

	//calculations

	TotalDeposit = Principal * pow(1 + (InterestRate / TimesCompounded), TimesCompounded);
	InterestEarned = TotalDeposit - Principal;
	DisplayInterestRate = InterestRate * 100; 
	
	//Outputs

	
	cout << setw(25) << left << "Interest Rate: " << DisplayInterestRate << "%" << endl;
	cout << setw(25) << left << "Times Compounded: " << TimesCompounded << endl;
	cout << setw(25) << left << "Principal: " << "$ " << showpoint << Principal << endl;
	cout << setw(25) << left << "Interest: " << "$ " << setprecision(2) << fixed << InterestEarned << endl;
	cout << setw(25) << left << "Amount in Savings: " << "$ " << TotalDeposit << endl;
	cout << UserName << " has a total amount of $" << TotalDeposit << " in the savings account.\n" << endl;
	
	return 0;
}
