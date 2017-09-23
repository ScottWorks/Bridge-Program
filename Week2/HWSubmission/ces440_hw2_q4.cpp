/*
Author: Courtney E. Scott
Date: 09/18/2017

Task: Write a program that does the following:
• Ask user to input three Real numbers a, b and c. They represent the parameters of a
quadratic equation ????# + ???? + ?? = 0
• Classify to one of the following:
- ’Infinite number of solutions’ (for example, 0??# + 0?? + 0 = 0 has infinite
number of solutions)
- ’No solution’ (for example, 0??# + 0?? + 4 = 0 has no solution)
- ’No real solution’ (for example, ??# + 4 = 0 has no real solutions)
- ’One real solution’
- ’Two real solutions’
• In cases there are 1 or 2 real solutions, also print the solutions.*/


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double aInput, bInput, cInput, quadResult, quadFormulaPos, quadFormulaNeg, discriminant;
	cout.setf(ios::fixed);
	cout.precision(1);

	cout << "Please enter value of a:	";
	cin >> aInput;
	cout << "Please enter value of b:	";
	cin >> bInput;
	cout << "Please enter value of c:	";
	cin >> cInput;

	discriminant = (pow(bInput, 2) - 4 * aInput*cInput);

	if (cin.fail()) {
		cout << "Invalid Entry, Please Try Again..." << endl;
		return 0;
	}
	else if (aInput == 0 && bInput == 0 && cInput == 0) {
		cout << "This equation has an infinite number of solutions";
	}
	else if (aInput == 0 && bInput == 0 && cInput != 0) {
		cout << "This equation has no solution" << endl;
	}
	else if (aInput != 0 && bInput == 0 && cInput != 0) {
		cout << "This equation has no real solution" << endl;
	}
	else if (discriminant == 0) {
		quadFormulaPos = (-bInput + (sqrt(pow(bInput, 2) - 4 * aInput*cInput))) / (2 * aInput);
		cout << "This equation has has a single real solution x = " << quadFormulaPos << endl;
	}
	else if (discriminant > 0) {
		quadFormulaPos = (-bInput + (sqrt(pow(bInput, 2) - 4 * aInput*cInput))) / (2 * aInput);
		quadFormulaNeg = (-bInput - (sqrt(pow(bInput, 2) - 4 * aInput*cInput))) / (2 * aInput);
		cout << "This equation has has two real solutions x = " << quadFormulaPos << " and x = " << quadFormulaNeg << endl;
	}

	return 0;
}

