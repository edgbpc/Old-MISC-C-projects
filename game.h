#include <iostream>
#include <ctime> //for time function
#include <cstdlib> //for srand function

using namespace std;

//constant variables
	const int 	MIN_VALUE = 1,
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
	
	Computerchoice = GetComputerChoice();
	
	Playerchoice = GetPlayerChoice();
	
	WhoWins(Playerchoice, Computerchoice);
	

	
	
	
	return 0;
	
}


// definition of GetComputerChoice

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

int GetPlayerChoice() 
{
char choice; //local variable

	cout << "Let's play!" << endl;
	cout << "Choose (r)Rock, p(Paper), (s)Scissors! Or choose q to Quit" << endl;
	cin >> choice;
	
	switch(choice)
	{
		case 'p':
				cout << "You selected rock" << endl;
				Playerchoice = 1;
				return Playerchoice;
				break;
 		case 'r': 
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
				 cout << "Good bye!" << endl;
				 return 0;
		default : cout << "You did not select a valid choice" << endl;
	}
	
}


WhoWins(int, int)
{
if (Playerchoice == 1 && Computerchoice == 3)
	cout << "Your rock smashes the computer's scissors.  You win!";
else if (Playerchoice == 1 && Computerchoice == 2)
	cout << "Your rock is wrapped by the computer's paper.  You Lose.";
else if (Playerchoice == 2 && Computerchoice == 1)
	cout << "Your paper wraps the computer's rock.  You win!";
else if (Playerchoice == 2 && Computerchoice == 3)
	cout << "Your paper gets cut by the computer's scissors.  You lose!";
else if (Playerchoice == 3 && Computerchoice == 1)
	cout << "Your scissors gets smashed by the computer's rock.  You lose!";
else if (Playerchoice == 3 && Computerchoice == 2)
	cout << "Your scissors cuts the computer's paper.  You win!";
else
	cout << "It's a tie! ";
}
	


