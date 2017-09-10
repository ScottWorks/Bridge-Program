/*
Author: Courtney E. Scott
Date: 09/09/2017

Task: Write a program that asks the user to enter an amount of money in the format of dollars and
remaining cents. The program should calculate and print the minimum number of coins
(quarters, dimes, nickels and pennies) that are equivalent to the given amount.*/

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

	cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
	cin >> dollars >> cents; 

	sum = (dollars * 100) + cents; 
	quarters = (sum / 25);
	dimes = (sum % 25) / 10;
	nickels = ((sum % 25) % 10) / 5;
	pennies = (((sum % 25) % 10) % 5);

	cout << dollars << " dollars and " << cents << " cents are: " << endl;
	cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies << " pennies" << endl;

	return 0;
}


