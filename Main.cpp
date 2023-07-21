#include <iostream>
#include <string>
#include "myStack.h"
#include "Funtions.h"

using namespace std;

int main() {
	
	string line;

	cout << "Enter an infix expression, to quit enter an empty line: " << endl;              //ask user for expression


	while (getline(cin, line) && (line != "")) {                              //checks for valid input
		
		cout << "\nYour infix expression is: " << line;

		if (isBalanced(line)) {         //function that checks for balance, if so call conversion function to change to postfix form
			
			cout << "\n\nYour expression is Balanced!" << endl << endl;   

			cout << "\n\nWe will now convert your infix expression to postfix.\nResult: " << conversion(line);
			break;
		
			 
		}

		if (!isBalanced(line)) {                  //if not balanced, ask new user for input or end program
			cout << "\n\nYour expression is Not Balanced!! Try a new line" << endl << endl;
		}
	}

	cout << "\n\nEnd of Program" << endl;
	
}



