//this program will compute commission price for a stock transition
//it will show price paid for stock alone, commission, and total paid

#include <iostream>
using namespace std;

int main()
{
	float StockPurchased = 750; //declares variable StockPurchased and sets value to 750
	float StockPrice = 35; //declares variable StockPrice and sets value to 35
	float StockCost; // declares variable StockPrice
	float CommissionPaid; // declares variable CommissionPaid
	float TotalPaid; // declares variable TotalPaid
	float CommissionFee = .02; // declares variable CommissionFee
	
	StockCost = StockPurchased * StockPrice; //formula to determine price of all shares of the stock purchased
	CommissionPaid = StockCost * CommissionFee; //formula to determine commission paid for the stock purchase
	TotalPaid = CommissionPaid + StockCost; //formula to determine total cost of the transaction
	
	/*Following outputs what was paid for all shares of stock without commission, what was paid
	in commission, and displays total paid for stock and commission */
	
	
	cout << "The amount paid for the stock alone is " << StockCost << " dollars." << endl;
	cout << "The amount of commission is " << CommissionPaid << " dollars." << endl;
	cout << "The total amount paid is " << TotalPaid << " dollars." << endl;
	
	return 0;
}
