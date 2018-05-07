#include <iostream>
#include <iomanip>
using namespace std;

int main()

{

double Fee = 2500, counter = 1;
const double IncreasePercent = .04;
 
do 
	{
	cout << "Year: " << counter << "\t\t" << showpoint << setprecision(2) << fixed << Fee << endl;
	Fee = Fee + (Fee * IncreasePercent);
	counter++;
	} while (counter < 7);

return 0;

}







