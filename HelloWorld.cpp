// Hello World : Console Application
// Start a new empty ConsoleApplication and add this file to it.

#include <iostream> 		// To use the input output Library in the code.
using std::cout;		// To use 'cout' and not 'std::cout'.
using std::cin;			// To use 'cin' and not 'std::cin'.
using std::endl;		// To use 'endl and not 'std::endl'.
char answer;			// Intialize character variable answer.

int main()						// The main() function is exuted first on a program. You can have only one main in a project.
{							// The bracades cover your code.
	cout << "Hello World!" << endl;			// Print Hello world.
	cout << "Extend(y/n) : ";			// Print A question 'Extend(y/n.
	cin >> answer;					// Set variable value to user input character

	if(answer == 'y' || answer == 'Y')		// Check if Variable equals 'Y' or 'y' and return true or false.
	{
		cout << "a hello world program on c++, The first step when learning a new programming language" << endl;			// If return = true, print text within " and ".
			cout << "End";														// print text within " and ".
	cin >> answer;																// ask user to press a key and enter.
	}
	else{																	// if the last 'IF' above returns false, execute code within { and }.
		return 0;															// Return to operating system.
	}
}
