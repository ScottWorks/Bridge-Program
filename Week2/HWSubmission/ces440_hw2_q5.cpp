/*
Author: Courtney E. Scott
Date: 09/18/2017

Task: Write a program that asks the user to enter a Real number, then it asks the user to enter the
method by which they want to round that number (floor, ceiling or to the nearest integer).
The program will then print the rounded result.*/


#include <iostream>
using namespace std;

int main() {
	const int FLOOR_ROUND = 1;
	const int CEILING_ROUND = 2;
	const int ROUND = 3;

	double realNum;
	int methodSelect;

	cout << "Please enter a Real number:	" << endl;
	cin >> realNum;

	cout << "Choose your rounding method:	" << endl;
	cout << "1. Floor Round" << endl;
	cout << "2. Ceiling Round" << endl;
	cout << "3. Round to the nearest whole number" << endl;
	cin >> methodSelect;

	switch (methodSelect) {
		case FLOOR_ROUND:
			realNum = floor(realNum);
			cout << realNum << endl;
			break;
		case CEILING_ROUND:
			realNum = ceil(realNum);
			cout << realNum << endl;
			break;
		case ROUND:
			realNum = round(realNum);
			cout << realNum << endl;
			break;
		default:
			cout << "Invalid Entry, Please Try Again..." << endl;
	}
    return 0;
}

