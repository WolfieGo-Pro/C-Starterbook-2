/*
  Had to Start up / continue My C++ Starterbook as a new cpp project
  Because of this 'pch.h' issue and.. my code was going nuts
*/

#include "pch.h"

using namespace std;

int array_contd()
{
	const string ls3{ "\n\t\t\t\t" };

	string student[]{ "...", "James", "Omar", "Ana", "Olivia", "Yates", "Ade", "Suarez" };

	for (int i = 0; i < 8; i++)
	{
		cout << ls3 << "Name of Student " << i << ": " << student[i] << endl; // This lets me output the elements of the student array according or along with the value or position of 'i'
		//but 'student[i,3]' iterates only the 4th element (3rd because counting starts from 0 in C++ )
		//Outputs the elements of the 'student' array According to the number of times the loop can be iterated.
		cout << ls3 << "********************************************" << endl;
	}

	cin.get(); //system("pause"); -- Not so good to be using in code

	cout << string(50, '\n');

	exit(0);
}