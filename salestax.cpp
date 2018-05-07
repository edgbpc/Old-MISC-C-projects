//program calculates the sales tax amount and the total sales amount and displays result
#include <iostream>
using namespace std;

int main()
{

//variables
double SalesTax,
	SalesPrice,
	TotalPricePaid,
	TaxPaid;
		  
//User Inputs

cout << "Please enter the amount of the sale." << endl;
cin >> SalesPrice;
cout << "Please enter the sales tax amount as a decimal" << endl;
cin >> SalesTax;

//calculations

TaxPaid = SalesTax * SalesPrice;
TotalPricePaid = TaxPaid + SalesPrice;

cout << "Sales tax paid is " << TaxPaid << endl;
cout << "Total price paid is " << TotalPricePaid << endl;

return 0;
}

