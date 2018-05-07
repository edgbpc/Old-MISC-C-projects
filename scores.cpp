//Write a program that will read data from the file "p6.dat". The file always contains 15 test scores (whole numbers between 0 and 100). The test scores are scores for 5 students taking 
//3 tests, and are arranged, in the file, by the student - that is the first 3 numbers are the test scores for test 1, 2, and 3 for the first student, etc.
//The program will print:
//- average per student (5 averages), on a single line, with 2 decimals
//- average per test (3 averages), on a single line, with 2 decimals
//- overall best score on a single line
//- how many scores were As (out of the 15, how many were at least 90) on a single line
//
//To simplify the code, no validations are needed. That is, assume the file is successfully opened, and that all data are 0-100, and that there are exactly 15 numbers in the file.
//Note that the program reads the filename

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
// variables
const int NUM_STUDENT = 5, NUM_SCORES = 3;   //controls array rows and cols 
float scores[NUM_STUDENT][NUM_SCORES]; //array to hold test scores by student
float total;
float average;
float bestscore = 0;
int num_of_As = 0;
	



//Load data in array

ifstream inputFile;
inputFile.open("p6.dat");  

for (int row = 0; row < NUM_STUDENT; row++)
{
	for (int col = 0; col < NUM_SCORES; col++)
		inputFile >> scores[row][col];
}

// Data processing 
// Calculates average score by student and displays 
for (int row = 0; row < NUM_STUDENT; row++)
{
	total = 0;
		
	for (int col = 0; col < NUM_SCORES; col++)
	
	total += scores[row][col];
	average = total / NUM_SCORES;
	cout << setprecision(2) << showpoint << fixed << "Average test score for  student " << row + 1 << " is " << average << endl;
	
}

//Calculates average score on each test and displays
for (int col = 0; col < NUM_SCORES; col++)
{
	total = 0;
	
	for (int row = 0; row < NUM_STUDENT; row++)
	{  // determines the best score and number of As
	if (scores[row][col] > bestscore)
		bestscore = scores[row][col];
	if (scores[row][col] >= 90)
		num_of_As++;
		total += scores[row][col];
	average = total / NUM_STUDENT;
	}
	cout << setprecision(2) << showpoint << fixed <<  "The average score on test " << col + 1 << " is " << average << endl;

}

//outside loop to display best overall score and number of As.  Can place this code inside the loops and it will display either by student or by test
//depending on which loop its placed in.

	cout << setprecision(2) << showpoint << fixed << "The best score is " << bestscore << endl << endl; 
	cout << "There are " << num_of_As << " grades of A " << endl;

return 0;

}

