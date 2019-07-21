/*
This is a proof-test to practice return & pass with namespaces in C++/

I thought that returning and passing arguments (values) to/from functions isn't necesary if
using a namespace.. that's wrong. Therefore the right way is to blend them >>

1.) Only declare nd initialize VARIABLES in a namespace
2.) Do the returning nd passing of arguments (values) FIRST,
3.) Then encapsulate the functions in a namespace

   That's it.'
*/

#include "pch.h"

using namespace std;

namespace values {

	const string ls3{ "\n\t\t\t" };
	string user_name;

	long number;
	long square;

	bool name_length{ user_name.length() > 1 };
}


using namespace values;


namespace funcs {//before creating this namespace, I'd already set the functions and the values to be returned and passed

	void intro() {

		cout << ls3 << "Hi there and welcome to the Squ App" << endl;
		cout << ls3 << "Where numbers can be easily squared and sorted out" << endl;
	}

	void name_check() {

		cout << ls3 << "To start with, tell us ur name : " << flush;

		cin >> user_name;

		do
		{
			if (name_length)
			{
				cout << ls3 << "Okay " << user_name << ", start squaring.." << endl;

				break;
			}
			else
			{

				cout << ls3 << "Sorry, name has got to be longer than 1 letter" << endl;

				cout << ls3 << "So tell us, what's ur name? : " << flush;

				cin >> user_name;
			}

		} while (name_length);

	}

	long get_input() {

		cout << string(3, '\n') << endl;
		cout << ls3 << "Number (type a number to square) : " << flush;

		cin >> number;

		cout << string(2, '\n') << endl;

		return number;
	}

	long process_input(long number) {

		long square{ number*number };

		cout << ls3 << "Square Will be " << fixed << square << endl;
		cout << string(3, '\n');

		return square;
	}

}

using namespace funcs;

int return_pass2() {

	intro();

	name_check();

	for (short i = 5; i <= 5; i--)
	{
		get_input();
		process_input(number);
	}

	return 0;
}