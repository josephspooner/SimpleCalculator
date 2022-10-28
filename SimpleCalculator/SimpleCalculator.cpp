/*
This is just a basic calculator that you can use to insert numbers into it.

Function:

Takes input from a file and uses the operation you select to calculate the
final result


Joseph Spooner
*/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int additionFunction(int, int); // prototype function 1
int multiplyFunction(int, int); // prototype function 2
int divideFunction(int, int); // prototype function 3
double percentageFunction(double, double); // prototype function 4
void mainMenu(); // print menu

int main()
{
	char selection; // selection for loop
	int number1, number2;

	cout << "Joseph Spooner © 2022" << endl;
	cout << "#####################################" << endl;
	cout << "#####################################" << endl;
	cout << "Simple Calculator in CPP" << endl;

	mainMenu();

	cout << "Make a selection: " << endl;

	cin >> selection; // store it
	
	while (selection != '5') // while not done
	{
		switch (selection)
		{
			case '1':
			{
				cout << "First Number: ";
				cin >> number1;

				cout << "Second Number: ";
				cin >> number2;

				cout << "The answer to your problem is: " << additionFunction(number1, number2) << endl;
				cout << "Returning to the main menu." << endl;

				mainMenu();

				cout << "Make a selection: " << endl;

				cin >> selection;
			}
			break;
			case '2':
			{
				cout << "First Number: ";
				cin >> number1;

				cout << "Second Number: ";
				cin >> number2;

				cout << "The answer to your problem is: " << multiplyFunction(number1, number2) << endl;
				cout << "Returning to the main menu." << endl;

				mainMenu();

				cout << "Make a selection: " << endl;

				cin >> selection;
			}
			break;
			case '3':
			{
				cout << "First Number: ";
				cin >> number1;

				cout << "Second Number: ";
				cin >> number2;

				cout << "The answer to your problem is: " << divideFunction(number1, number2) << endl;
				cout << "Returning to the main menu." << endl;

				mainMenu();

				cout << "Make a selection: " << endl;

				cin >> selection;
			}
			break;
			case '4':
			{
				cout << "What percent do you want to calculate?: ";
				cin >> number1;

				cout << "Of what number?: ";
				cin >> number2;

				cout << "The answer to your problem is: " << percentageFunction(number1, number2) << "%" << endl;
				cout << "Returning to the main menu." << endl;

				mainMenu();

				cout << "Make a selection: " << endl;

				cin >> selection;
			}
			break;
			default:
			{
				cout << "Not a valid selection";
			}
			break;
		}
	}
	cout << "End of the program.";
	return 0;
}

int additionFunction(int number1, int number2) // function 1
{
	return number1 + number2; // adding
}

int multiplyFunction(int number1, int number2) // function 2
{
	return number1 * number2; // multiplying
}

int divideFunction(int number1, int number2) // function 3
{
	return number1 / number2; // dividing
}

double percentageFunction(double number1, double number2) // function 4
{
	return (number1 / 100) * number2; // percents
}

void mainMenu() 
{
	char selection;
	cout << "1) Addition" << endl; // use addition, refer to function 1
	cout << "2) Multiplication" << endl; // use multiply refer to function 2
	cout << "3) Division" << endl; // use division refer to function 3
	cout << "4) Percentage" << endl; // calculate a percentage of a number refer to function 4
	cout << "5) Done" << endl; // done with everything
}

