#include <fstrSeam>
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

//function prototypes

int *makeArray(int);
void getSampleData(int[], int);
int selectionSort([], int);
double average([], int);
int median(int, int);
int mode(int, int);

//global variables
const int SIZE = 294;
int *ageData;

int main()
{
	*makeArray(SIZE);
	*ageData = getSampleData();
}

//function definitions
*/****************************************
*makeArray:  accepts an array and returns*
the address to the main function**********
****************************************/*

int *makeArray()
{
	new int SampleData[SIZE];
	
return SampleData;
}


*/***************************************
getSampleData: uses the address returned*
from makeArray to fill the array with ***
sample data******************************
***************************************/*

void getSampleData()
{
	ifstream inputFile
	inputFile.open("CSVDATA.csv")
	
for (int i = 0, i < SIZE, i++)
	inputFile >> SampleData[i];

	
}



