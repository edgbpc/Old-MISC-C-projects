//this program will compute commission price for a stock transition
//it will show price paid for stock alone, commission, and total paid

#include <iostream>
using namespace std;

int main()
{
	int StockPurchased = 750;
	int StockPrice = 35;
	int StockCost;
	float CommissionPaid;
	float TotalPaid;
	float CommissionFee = .02;
	
	StockCost = StockPurchased * StockPrice;
	CommissionPaid = StockCost * CommissionFee;
	TotalPaid = CommissionPaid + StockCost;
	
	cout << "The amount paid for the stock alone is " << StockCost << " dollars." << endl;
	cout << "The amount of commission is " << CommissionPaid << " dollars." << endl;
	cout << "The total amount paid is " << TotalPaid << " dollars." << endl;
	
	return 0;
}
