/*
 * Calculator.cpp
 *
 *  Date: [3/8/2023]
 *  Author: [Talon LeFevre]
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	// Declare variables for user input and answer to prompt to evaluate another expression
	char statement[100];
	int op1, op2;
	char operation;
	char answer = 'Y'; // Initialize answer to 'Y'

	// While loop to allow user to evaluate multiple expressions
	while (answer == 'y' || answer == 'Y')
	{
		cout << "Enter expression" <<endl;
		cin >> op2 >> operation >> op1; // Read in user input for operands and operator

		// Use if statements to determine which operation to perform and output result
		if (operation == '+')
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; // Output sum
		if (operation == '-')
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; // Output difference
		if (operation == '*')
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; // Output product
		if (operation == '/')
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; // Output quotient

		// Prompt user to evaluate another expression and read in answer
		cout << "Do you wish to evaluate another expression? (y/n)" << endl;
		cin >> answer;

		// Check if user entered 'n', and respond accordingly
		if (answer == 'n' || answer == 'N')
		{
			cout << "Program finished" << endl;
			break; // Exit the while loop
		}
	}

	// The program will reach this point if the user enters 'n' or if an error occurs that causes the while loop to exit
	// Here, you could add any final output or cleanup code as needed
}
