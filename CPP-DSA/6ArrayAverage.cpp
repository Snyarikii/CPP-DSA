#include <iostream>
#include "Calculations.h"


using namespace std;

void CalculateArrayAverage() {
	double values[5];//Array to store 5 numbers
	double sum = 0;//Variable to store the sum of the numbers

	cout << "\nQuestion 6: Calculate the average of an array of 5 numbers" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "   Enter number " << (i + 1) << ": ";//Prompt to enter each number
		cin >> values[i];//Capture numbers entered
		sum += values[i];//Add number to sum
	}

	double average = sum / 5;//Calculate average

	cout << "   The average is: " << average << endl;//Display average
}