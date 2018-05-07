// this program will ask the user to enter what they had to eat
// the calories and then compute the amount of calories from fat
// then display if its low in fat

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{

//variables

double Calories, CaloriesFromFat, Fat, PercentFromFat, FatThreshold;
char MealType;


//user inputs

cout << "What did you have to eat?\n";
cout << "Enter B, L, or D\n";
cout << "\t B - Breakfast\n";
cout << "\t L - Lunch\n";
cout << "\t D - Dinner\n";
cin >> MealType;

switch (MealType)
{
	case 'b' : 
	case 'B' : cout << "You entered breakfast\n";
				FatThreshold = .1;
				break;
	case 'l' :
	case 'L' : cout << "You entered lunch\n";
				FatThreshold = .2;
				break;
	case 'd' :
	case 'D' : cout << "You entered dinner\n";
				FatThreshold = .3;
				break;
	default : cout << "You did not enter a valid choice.  Please run the program again.\n";
				return 1;
}
	

cout << "Enter the calories: " << endl;
cin >> Calories;
if (Calories < 0) 
	{
	cout << "You entered a negative number.  Calories cannot be negative.  Please run the program again and enter a positive number.\n";
	return 1;
	}
	
cout << "Enter the amount of fat: " << endl;
cin >> Fat;
if (Fat < 0)
	{
	cout << "You entered a negative number.  Fat cannot be negative. Please run the program again and enter a positive number.\n";
	return 1;
	}

	
//Calculations

CaloriesFromFat = Fat*9;
PercentFromFat = CaloriesFromFat/Calories;

//outputs

if (CaloriesFromFat > Calories)
	{
	cout << "Calories from fat cannot be higher then the total calories.\n";
	cout << "Either the fat entered or the calories entered is incorrect.\n";
	cout << "Please run the program again.\n";
	return 1;
	}
	
	else 
	cout << "Your food has  " << setprecision(1) << fixed << PercentFromFat*100 << "% calories from fat.\n";

if (PercentFromFat < FatThreshold)
	cout << "This is a low fat food.\n";
	
	else
	cout << "This is not a low fat food.\n";

return 0;

}



