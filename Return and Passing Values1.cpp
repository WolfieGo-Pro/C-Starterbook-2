/*

  Sometimes, when I declare & initialize variables in a function, 
  It's gonna be needed in a different scope or the caller (main) scope.
  And I know that C++ only reads from the caller scope, so
  the variables initialized in a function (or outside the main scope)
  should be made to return to the main scope (to get updated remotely either by the user or someone else).
  And the way to do that is to make a new variable in the main scope, then
  equate the variable to the function in which we've set the variable to return values to the main scope.

  ********************************************************************************************************

  Also, tweaked how a variable is received/called from one function to another
  by declaring the variable I wanna receive in the new function as a parameter/an argument (with the variable type)
  and then, declaring it in the main scope as well (without the variable type).

  Tested and Worked it out, but overall, I'd prefer using namespaces so as not to keep copying variables in different scopes and keep returning variables
*/

#include "pch.h"

using namespace std;

string badoo() {

	const string ls3{ "\n\t\t\t" };

	string user_input;

	return ls3; //because I want to use this variable in another function

	return user_input; //This one as well

}

/*
int badiee() {

	int user_figure;

	return user_figure;
}
*/

string get_input(string user_input) { //bcuz the returned 'user_input' variable is being passed down so as to be used by this function through parameters

	string ls3{ badoo() };
	
	cout << ls3 << "type it in : " << flush;

	cin >> user_input;

	return user_input; //Bcuz it's gonna be used in another función
}

string process_input(string user_input) {

	string ls3{ badoo() };

	cout << ls3 << "Damn, how could your answer be " << user_input << " ?" << endl;
	cout << ls3 << "If you see this message, " << flush;
	cout <<	ls3 << "Then multiple values can be returned in a function and that's okay" << endl;
	cout << ls3 << "And that other functions can receive variables from other functions by "<< flush;
	cout << ls3 << "writing it as a parameter / arguments" << endl;

	return user_input;
}

void show_menu() {

	string ls3{ badoo() };
	
	
	string strange_menus[]{ "Do Nothin", "Study ? ", "Watch cat videos ? ", "Jerk off ? ", "Quit like a loser ? " };

	for (short i = 0; i < sizeof(strange_menus) / sizeof(string); i++)
	{
		cout << ls3 << i << " " << strange_menus[i] << endl;
	}
}	

int return_pass1() {//return_and_pass

	show_menu();
	
	string ls3 { badoo() }; //The variables set here don't necessarily have to be the same as the ones being returned from other functions
	string user_input { badoo() }; // This one as well.

	get_input(user_input); // Bcuz I didn't set the 'user_input' variable in the 'get_input' function, so I'm calling it from another function using parameters

	process_input(user_input); // Or, something like this: process_input(get_input(user_input)); - so it's a function processing a returned value from another function 'get_input()';

	cout << string(10, '\n');
	
	return 0;

	// Tested and Worked it out, but overall, I'd prefer using namespaces so as not to keep copying variables in different scopes
}