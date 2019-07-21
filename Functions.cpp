/*
  PRACTICING THE VERY 1ST USE OF FUNCTIONS / METHODS IN C++. THEREFORE THE COMMENTS IN THIS CODE ARE FOR ME TO UNDERSTAND BETTER.
  THOUGH IT'S USED MORE IN C, IT'S ALSO USEFUL HERE IN C++

  Started - 19 / 11 / 2018 - Monday 01:44 after midnight

  // ALSO DECIDED TO ADD MY OWN NAMESPACES TO SPICE THINGS UP A BIT. IN THE END, MY CODE LOOKING NICE

  FACED A HECK OF A TROUBLE WITH NAMESPACES AND FUNCTIONS BEING USED 2GETHER. (EVER SINCE 20/11/2018).. BUT I FINALLY FIGURED IT OUT --> 'USING NAMESPACE STD' -->
  MUST BE PUT 1ST BEFORE ANYTHING ELSE AFTER THE HEADERS (THAT IS IF THE VALUE/VARIABLE/FUNCTION OR METHOD U WANT TO USE IS IN NAMESPACE STD).

  I ALSO LEARNED THAT IF A VARIABLE THAT U WANT TO USE IN A NAMESPACE IS IN A DIFF NAMESPACE, 
  CALL THE NAMESPACE FROM WHERE THE VARIABLE LIES INTO THE NAMESPACE U WANT TO USE IT IN
*/

#include "pch.h"

// Using 'void' because the functions/methods I'm creating are not gonna be sending/returning info back to the 'main' scope

// Using 'int' will let C++ know that the function can return an integer to the 'main' scope 

using namespace std;

namespace my_vars {

	string ls3{ "\n\t\t\t" };  //For a new line and moderate indentation (tab space x3)
	
	const unsigned study{ 1 }; //Not necesarry, just want to use this variable as a means to change a case label

	unsigned user_input;
};

namespace my_functions {

	using namespace my_vars; //I referenced it here cuz I'm calling variables from it.

	void show_menu() {

		string strange_menus[]{ "Do Nothin", "Study ? ", "Watch cat videos ? ", "Jerk off ? ", "Quit like a loser ? " };

		for (short i = 0; i < sizeof(strange_menus) / sizeof(string); i++)
		{
			cout << ls3 << i << " " << strange_menus[i] << endl;
		}
	};

	void process_show_input() {

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
	};
}

using namespace my_vars;
using namespace my_functions;

int functions() {

	cout << ls3 << "What would you like to do?" << endl;

	show_menu();

	cout << ls3 << "Type the corresponding number: " << flush;

	cin >> user_input; // would have been in a 'get_input()' function. But it's just a line soo

	process_show_input();

	return 0;

	exit(2);

}

// IN THE END, I FEEL F'ING GREAT!