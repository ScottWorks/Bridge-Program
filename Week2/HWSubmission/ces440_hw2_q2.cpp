/*
Author: Courtney E. Scott
Date: 09/17/2017

Task: Write a program that computes how much a customer has to pay after purchasing two
items. The price is calculated according to the following rules:
• Buy one get one half off promotion: the lower price item is half price.
• If the customer is club card member, additional 10% off.
• Tax is added.

Inputs to the program include:
• Two items’ prices
• Have club card or not (User enters ‘Y’ or ‘y’ for “yes”; ‘N’ or ‘n’ for “no”)
• Tax rate (User enters the percentage as a number; for example they enter 8.25 if the tax
rate is 8.25%)

Program displays:
• Base price - the price before the discounts and taxes
• Price after discounts - the price after the buy one get one half off promotion and the
member’s discount, if applicable
• Total price – the amount of money the customer has to pay (after tax).*/


#include <iostream>
using namespace std;

int main() {
	double firstItemPrice, secondItemPrice, sum, taxRate;
	char clubCard;
	cout.setf(ios::fixed);
	cout.precision(1);

	cout << "Enter price of first item:	";
	cin >> firstItemPrice;
	cout << "Enter price of second item:	";
	cin >> secondItemPrice;

	sum = firstItemPrice + secondItemPrice;

	cout << "Does customer have a club card? (Y/N):	";
	cin >> clubCard;

	cout << "Enter tax rate, e.g. 5.5 for 5.5% tax:	";
	cin >> taxRate;
	taxRate = (taxRate / 100);

	cout << "Base price:	" << sum << endl;


	if (firstItemPrice < secondItemPrice) {
		firstItemPrice *= 0.50;
		sum = firstItemPrice + secondItemPrice;
	}
	else {
		secondItemPrice *= 0.50;
		sum = firstItemPrice + secondItemPrice;
	}

	if (clubCard == 'y' || clubCard == 'Y') {
		sum *= 0.90;
		cout << "Price after discounts:	" << sum << endl;
	}
	else if (clubCard == 'n' || clubCard == 'N') {
		cout << "Price after discounts:	" << sum << endl;
	}
	else {
		cout << "Club Card Entry Invalid, Please Enter 'Y' for Yes or 'N' for No..." << endl;
		return 0;
	}


	cout.precision(5);
	sum = sum + (taxRate * sum);
	cout << "Total price:	" << sum << endl;

    return 0;
}

