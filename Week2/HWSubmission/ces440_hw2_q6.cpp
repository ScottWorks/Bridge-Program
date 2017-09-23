/*
Author: Courtney E. Scott
Date: 09/18/2017

Task: Body mass index (BMI) is a number calculated from a person’s weight and height using the
following formula: ???????????/??????????#. Where ??????????? is in kilograms and ?????????? is in meters.
According to the Centers for Disease Control and Prevention, the BMI is a fairly reliable
indicator of body fatness for most people. BMI does not measure body fat directly, but
research has shown that BMI correlates to direct measures of body fat, such as underwater
weighing and dual-energy X-ray absorptiometry.*/

#include <iostream>
#include <cmath>
using namespace std;


int main() {
	const double kgConst = 0.453592; // 1 lb = 0.453592 kg
	const double mConst = 0.0254; // 1 lb = 0.0254 m

	double inputWeight, inputHeight, calcBMI;

	cout << "Please enter weight (in pounds):	";
	cin >> inputWeight;
	cout << "Please enter height (in inches):	";
	cin >> inputHeight;

	inputWeight *= kgConst;
	inputHeight *= mConst;

	calcBMI = inputWeight / pow(inputHeight, 2);

	if (calcBMI <= 18.5) {
		cout << "The weight status is: Underweight" << endl;
	}
	else if (calcBMI > 18.5 && calcBMI < 25) {
		cout << "The weight status is: Normal" << endl;
	}
	else if (calcBMI > 25 && calcBMI < 30) {
		cout << "The weight status is: Overweight" << endl;
	}
	else if (calcBMI >= 30) {
		cout << "The weight status is: Obese" << endl;
	}
    return 0;
}

