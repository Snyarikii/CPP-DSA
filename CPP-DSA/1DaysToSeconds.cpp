#include <iostream>
#include "Calculations.h"

using namespace std;

void DaysToSeconds() {
	int days;
	cout << "Question 1: No of days to seconds" << endl;
	cout << "   Enter the number of days: "; //Prompt to enter no of days
	cin >> days;

	long long seconds = (long long)days * 24 * 60 * 60;//Convert the no of days to seconds

	cout <<"   " << days << " day(s) = " << seconds << " seconds." << endl;//Equivalent of the no of days in seconds
}