/*
Author: Courtney E. Scott
Date: 09/18/2017

Task: Write a program that computes the cost of a long-distance call. The cost of the call is
determined according to the following rate schedule:
• Any call started between 8:00 A.M. and 6:00 P.M., Monday through Friday, is billed at a
rate of $0.40 per minute.
• Any call starting before 8:00 A.M. or after 6:00 P.M., Monday through Friday, is charged
at a rate of $0.25 per minute.
• Any call started on a Saturday or Sunday is charged at a rate of $0.15 per minute.
The input will consist of the day of the week, the time the call started, and the length of the
call in minutes.
The output will be the cost of the call.

Notes:
1. The time is to be input in 24-hour notation, so the time 1:30 P.M. is input as 13:30
2. The day of the week will be read as one of the following two character string: Mo Tu
We Th Fr Sa Su
3. The number of minutes will be input as a positive integer.*/


#include <iostream>
#include <string>
using namespace std;

int main() {
	char semiColon;
	string dayOfWeek;
	int hoursTOD, minutesTOD, convertedTOD, callDuration;
	double callRate = 0, callCost;
	cout.setf(ios::fixed);

	cout << "Please enter the current Time-of-Day in 24-hr format (i.e. 13:30):	";
	cin >> hoursTOD >> semiColon >> minutesTOD;

	convertedTOD = (hoursTOD * 100) + minutesTOD;

	cout << "Please select the day of the week (i.e. Mo, Tu, We, Th, Fr, Sa, Su):	";
	cin >> dayOfWeek;
	cout << "Please enter duration of call in minutes:	";
	cin >> callDuration;

	if (dayOfWeek == "Mo" || dayOfWeek == "Tu" || dayOfWeek == "We" || dayOfWeek == "Th" || dayOfWeek == "Fr") {
		if (convertedTOD > 800 && convertedTOD < 1800) {
			callRate = 0.40;
		}
		else if (hoursTOD < 800 || hoursTOD > 1800) {
			callRate = 0.25;
		}
	}
	else if (dayOfWeek == "Sa" || dayOfWeek == "Su") {
		callRate = 0.15;
	}
	else {
		cout << "Invalid Entry, Please Try Again :vP" << endl;
	}

	cout.precision(2);
	callCost = callRate * callDuration;
	cout << "The total cost of your call is:	$" << callCost << endl;

    return 0;
}

