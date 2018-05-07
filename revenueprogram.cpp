//Program that outputs East Coast divion's sales
#include <iostream>
using namespace std;

int main()

{
double EastCoastDivisionSales; // declares variable EastCoastDivisionSales
      long TotalCompanySales = 8600000; //declares and TotalCompanySales
      float RevenuePercent = .58; //declares RevenuePercent and sets it to .58
      EastCoastDivisionSales = TotalCompanySales * RevenuePercent;
      cout <<fixed<< "East Coast division's sales is $" << EastCoastDivisionSales  << endl;
	
     return 0;
	 
}
