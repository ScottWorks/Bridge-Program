/*
Author: Courtney E. Scott
Date: 09/09/2017

Task: Suppose John and Bill worked for some time and we want to calculate the total time both of
them worked. Write a program that reads number of days, hours, minutes each of them
worked, and prints the total time both of them worked together as days, hours, minutes.*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int jDays;
	int jHours;
	int jMinutes;

	int bDays;
	int bHours;
	int bMinutes;

	int sum;

	int daysToMinutes; 
	int hoursToMinutes; 

	int days;
	int hours;
	int minutes;

	cout << "Your program should interact with the user exactly as it shows in the following example:" << endl;
	cout << "Please enter the number of days John has worked:	";
	cin >> jDays;
	cout << "Please enter the number of hours John has worked:	";
	cin >> jHours;
	cout << "Please enter the number of minutes John has worked:	";
	cin >> jMinutes;

	cout << "Please enter the number of days Bill has worked:	";
	cin >> bDays;
	cout << "Please enter the number of hours Bill has worked:	";
	cin >> bHours;
	cout << "Please enter the number of minutes Bill has worked:	";
	cin >> bMinutes;

	daysToMinutes = (jDays + bDays) * 1440;
	hoursToMinutes = (jHours + bHours) * 60;

	sum = daysToMinutes + hoursToMinutes + jMinutes + bMinutes; 

	days = sum / 1440;
	hours = (sum % 1440) / 60;
	minutes = ((sum % 1440) % 60); 

	cout << "The total time both of them worked together is: " << days << " days " << hours;
		cout << " hours " << minutes << " minutes " << endl;

	return 0;
}


