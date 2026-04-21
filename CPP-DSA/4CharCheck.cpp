#include <iostream>
#include <cctype>
#include "Calculations.h"

using namespace std;

void CheckCharacterCase() {
	char inputChar;//Variable to store the character entered
	cout << "\nQuestion 4: Check if a character is uppercase or lowercase" << endl;
	cout << "   Enter a character: ";
	cin >> inputChar;//Capture character entered
	if (isupper(inputChar)) {
		cout << "   The character '" << inputChar << "' is uppercase." << endl;//Check if the character is uppercase and display result
	} else if (islower(inputChar)) {
		cout << "   The character '" << inputChar << "' is lowercase." << endl;//Check if the character is lowercase and display result
	} else {
		cout << "   The character '" << inputChar << "' is neither uppercase nor lowercase." << endl;//If the character is neither uppercase nor lowercase, display result
	}
}