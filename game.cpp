#include <iostream>
#include <ctime> //for time function
#include <cstdlib> //for srand function

using namespace std;

//constant variables
	const int 	MIN_VALUE = 1, //these variables set the range used by the GetComputerChoice function
				MAX_VALUE = 3;

//function prototypes

	int GetComputerChoice();
	int GetPlayerChoice();
	int WhoWins(int, int);
	
//variables
	int PlayerSelection,
		Playerchoice,
		Computerchoice;

	
int main()
{
	while (Playerchoice != 5)  // this loops continues until the player chooses q to quit.
	{
	Computerchoice = GetComputerChoice();
	
	Playerchoice = GetPlayerChoice();
	
	WhoWins(Playerchoice, Computerchoice);
	}

	return 0;
}


// definition of GetComputerChoice
// random selects a choice for the computer between 1 and 3

int GetComputerChoice()
{
	//get system time
	 unsigned seed = time(0);
	//seed random generator.
	 srand(seed);
	
	int selection; //local variable
	return  (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
}

//definition of GetPlayerChoice
//displays the menu to the user, gets their selection, and returns a value later used by the WhoWins function to determine the winner.

int GetPlayerChoice() 
{
char choice; //local variable

	cout << "\nLet's play!" << endl;
	cout << "Choose (r)Rock, p(Paper), (s)Scissors! Or choose q to Quit" << endl;
	cin >> choice;
	
	switch(choice)
	{
		case 'r':
				cout << "You selected rock" << endl;
				Playerchoice = 1;
				return Playerchoice;
				break;
 		case 'p': 
				cout << "You selected paper" << endl;
				Playerchoice = 2;
				return Playerchoice;
				break;
		case 's': 
				cout << "You selected scissors" << endl;
				Playerchoice = 3;
				return Playerchoice;
				break;
		case 'q':
				 Playerchoice = 5;
				 return Playerchoice;
				 break;
		default : cout << "You did not select a valid choice" << endl;
				Playerchoice =0;
				return Playerchoice;
				break;
	}
	
}

//definition of WhoWins function.  Compares the values from the functions GetComputerChoice and GetPlayerChoice 
//to determine the winner.  Function also processes the quit command.

int WhoWins(int, int)
{
if (Playerchoice == 1 && Computerchoice == 3)
	cout << "Your rock smashes the computer's scissors.  You win!\n";
else if (Playerchoice == 1 && Computerchoice == 2)
	cout << "Your rock is wrapped by the computer's paper.  You Lose.\n";
else if (Playerchoice == 2 && Computerchoice == 1)
	cout << "Your paper wraps the computer's rock.  You win!\n";
else if (Playerchoice == 2 && Computerchoice == 3)
	cout << "Your paper gets cut by the computer's scissors.  You lose!\n";
else if (Playerchoice == 3 && Computerchoice == 1)
	cout << "Your scissors gets smashed by the computer's rock.  You lose!\n";
else if (Playerchoice == 3 && Computerchoice == 2)
	cout << "Your scissors cuts the computer's paper.  You win!\n";
else if (Playerchoice == Computerchoice)
	cout << "It's a tie!\n";
else if (Playerchoice == 5)
	{
	cout << "It was fun!  Good bye!\n";
	return 1;
	}
	else 
	cout << "Please select again or choose q to quit.\n";
}



	

	
	
	
	


