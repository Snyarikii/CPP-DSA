#include <iostream>
#include "Calculations.h"

using namespace std;

void PseudoCode() {
	double x = 0;
	int y = 20;

	cout << "\nQuestion 5: Pseudo-code calculations for x and y" << endl;

	do {
		y = y - 4;//Subtract 4 from y
		x = x + (2.0 / y);//Add 2/y to x

		cout << "   Y: " << y << " X: " << x << endl;
	} while (y >= 6);//Until y is less than 6

	cout << "   X is: " << x << endl;//Display x

}