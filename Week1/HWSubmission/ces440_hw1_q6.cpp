/*
Author: Courtney E. Scott
Date: 09/09/2017

Task: Write a program that asks the user to enter a number of quarters, dimes, nickels and
pennies and then outputs the monetary value of the coins in the format of dollars and
remaining cents.*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int quarters;
	int dimes;
	int nickels;
	int pennies; 

	int sum;
	int dollars;
	int cents;

	cout << "Please enter number of coins:" << endl;
	cout << "# of quarters:	";
	cin >> quarters;
	cout << "# of dimes:	";
	cin >> dimes;
	cout << "# of nickels:	";
	cin >> nickels;
	cout << "# of pennies:	";
	cin >> pennies;

	sum = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies; 
	dollars = sum / 100;
	cents = sum % 100; 

	cout << "The total is " << dollars << " dollars and " << cents;
		cout << " cents." << endl; 

	return 0;
}


