/*
  SWITCH IS LIKE 'ELSE IF' BUT HAS BEEN HIGHLY OPTIMIZED TO RUN CONDITIONAL STATEMENTS A BIT FASTER

  IT ALSO LET'S THE PROGRAMMER 'CHOOSE BETWEEN VARIOUS POSSIBLE VALUES/CASES'
*/

#include "pch.h"

using namespace std;

// THIS IS WHERE I ALSO LEARNED ABOUT FUNCTIONS (AT O LEVEL)

int switch_condition() {

	const string ls3{ "\n\t\t\t" };

	cout << ls3 << "What would you like to do?" << endl;

	string strange_menus[]{ "Do Nothin", "Study ? ", "Watch cat videos ? ", "Jerk off ? ", "Quit like a loser ? " };

	for (short i = 0; i < sizeof(strange_menus) / sizeof(string); i++)
	{
		cout << ls3 << i << " " << strange_menus[i] << endl;
	}

	cout << ls3 << "Type the corresponding number: " << flush;

	int user_input;

	const int study{ 1 }; //Not necesarry, just wanted to use this variable as a means to change a case label

	cin >> user_input;

	switch (user_input)
	{
	default:
		cout << ls3 << "Dude, at least type something" << endl;
		break; //'break' function isn't necessary with the 'default' case

	case 0: // The case label can be the name of the variable only if it's an int or char, set to constant and doesn't need a user's input
		cout << ls3 << "Bruh, U Jobless" << endl;
		break;
	case study:
		cout << ls3 << "Bruh, U are blessed. Go for it" << endl;
		break;
	case 2:
		cout << ls3 << "Bruh, seriously?" << endl;
		break;
	case 3:
		cout << ls3 << "Bruh, Couldn't think of anything else?" << endl;
		break;
	case 4:
		cout << ls3 << "Bruh, U weak AF" << endl;
		break;
	}

	exit(2);
}