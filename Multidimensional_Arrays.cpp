/*
  MOVING ON FROM ARRAYS (OF A SINGLE ITERATION) TO MULTIDIMENSIONAL ARRAYS (OF MULTIPLE ITERATION)

  IT'S LIKE CREATING A SET OF ARRAYS THAT'S GONNA LOOK LIKE A TABLE .. BUT NOT REALLY.

  25/10/2018 - Thursday 10:44 am
  UPDATE - 1/11/2018 - THURSDAY 09:52 AM

  LAST UPDATE - Sunday 7:56 am - 18/11/2018

*/

#include "pch.h"

using namespace std;

int multiD_arrays()
{
	const string ls3{ "\n\t\t\t" };

	string student[][8]{ //multi-dimensional arrays --> (A set/table of arrays)

	{"...", "James", "Omar", "Ana", "Olivia", "Yates", "Ade", "Suarez" }, //nested arrays
	{"...", "Arthur", "Jefreys", "Vanessa", "Dina", "Scott", "Wale", "Juan"} //nested arrays

	};

	for (short i = 0; i < sizeof(student) / sizeof(student[0]); i++) // this 1st loop means that the multi-dimensional array set, contains 2 arrays (or how many nested arrays are they in an array set)
	{
		for (short j = 0; j < sizeof(student[0]) / sizeof(string); j++) // this 2nd loop means that they're less than 8 elements in the nested arrays (not the array set itself)
		{
			cout << ls3 << "Name of Student " << j << ": " << "  " << student[i][j] << flush; //Outputs the no. of times the loops are gonna be iterated (executed) with the elements of the nested arrays... together
		}

		cout << endl;
	}

	// SIZE OF MULTI-DIMENSIONAL ARRAYS

	/*
		  (for the 1st for loop), we code in the size of the array 'student' divided by the size of one of the nested array of 'student'
		  Doing so gives us the number of nested arrays to loop through a for loop. (which is what we need to start with).

		  Because it's 2D array, (for the 2nd for loop,) number of elements in nested array A is equal to number of elements in nested array B.
	Therefore, dividing the size of nested array A by size of 'string' is the same as
	dividing the size of nested array B by size of 'string' .  So just 1 of the nested array is needed to divide.
	That's what I figured.

	-- Still pondering how I figured this out without actually waiting for the solution.. I feel like a semi-boss in C++ already
	 */

	short result{ 224 / 28 };

	cout << ls3 << "Size of 'String' variables is: " << sizeof(string) << endl;
	cout << ls3 << "Size of the 'student' array is : " << sizeof(student[0]) << endl;
	cout << ls3 << result << endl;

	cin.get(); //system("pause"); -- Not so good to be using in code

	cout << string(50, '\n');

	exit(0);
}