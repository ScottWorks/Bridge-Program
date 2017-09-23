/*
Author: Courtney E. Scott
Date: 09/17/2017

Task: Write a program that:
• Asks the user for their name.
• Asks the user to input their graduation year.
• Asks the user to input the current year.

Assume the student is in a four-year undergraduate program. Display the current status the
student is in. Possible status include: not in college yet, freshman, sophomore, junior, senior,
graduated.

Note: If graduation year equals to current year, status is ‘Graduated’; if graduation year is
four years after current year, status is ‘Freshman’, etc.*/


#include <iostream>
#include <string>
using namespace std;

int main() {
	string studentName, studentStatus;
	int gradYear, currentYear, diffYear;

	cout << "Please enter your name: ";
	cin >> studentName;

	cout << "Please enter your graduation year: ";
	cin >> gradYear;

	cout << "Please enter current year: ";
	cin >> currentYear;

	diffYear = gradYear - currentYear;

	if (cin.fail()) {
		cout << "Invalid Entry, Please Try Again..." << endl;
		return 0;
	}
	else if (diffYear <= 0) {
		studentStatus = "Graduated";
	}
	else if (diffYear >= 5) {
		studentStatus = "Not in college yet";
	}
	else if (diffYear == 1) {
		studentStatus = "Senior";
	}
	else if (diffYear == 2) {
		studentStatus = "Junior";
	}
	else if (diffYear == 3) {
		studentStatus = "Sophomore";
	}
	else if (diffYear == 4) {
		studentStatus = "Freshman";
	}

	cout << studentName << ", you are a " << studentStatus << endl;

    return 0;
}

