#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream inputFile;
	string filename;
	double number = 0, total, counter = 0;
	double average;
	
	//Get file name from user
	cout << "Enter the file name: ";
	cin >> filename;
	
	//Open the file
	inputFile.open(filename.c_str());
	
	//Process
	if (inputFile)
	{
		
		while (inputFile >> number )
		{
			total += number;
			counter++;
		}
		
		average = total / counter;
		
		cout << "There are " << counter << " numbers.\n";
		cout << "The sum of all the numbers is " << total << endl;
		cout << "The average of all the numbers is " << average << endl;
		
		//close the file
		inputFile.close();
	}
	else
	{
	
		//display error message
		cout << "Error opening the file.\n";
		
	}
	
	return 0;

}

