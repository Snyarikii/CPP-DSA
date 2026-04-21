#include <iostream>
#include <cmath>
#include "Calculations.h"

using namespace std;

void CalculateSphereVolume() {
	double radius;
	const double PI = 3.14159265358979323846;//The constant for PI

	cout << "\nQuestion 2: Volume of a sphere" << endl;
	cout << "   Enter the radius of the sphere: ";
	cin >> radius;//Capture radius entered

	double volume = (4.0 / 3.0) * PI * pow(radius, 3);//Calculate sphere volume with captured radius

	cout << "   The volume of the sphere is: " << volume << endl;//Display volume
}
