#include <iostream>
#include "Calculations.h"

using namespace std;

void SquarePerimeterandArea() {
	double side;
	cout << "\nQuestion 3: Area and Perimeter of a square" << endl;
	cout << "   Enter the side length of the square: ";
	cin >> side;//Capture side length entered

	cout << "   Area: " << (side * side) << endl;//Calculate and display square area
	cout << "   Perimeter: " << (4 * side) << endl;//Calculate and display square perimeter
}