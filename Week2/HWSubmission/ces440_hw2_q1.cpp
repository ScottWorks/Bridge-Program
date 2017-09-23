/*
Author: Courtney E. Scott
Date: 09/17/2017

Task: Write a program that reads from the user two positive integers, and prints the result of
when we add, subtract multiply, divide, div and mod them.*/

#include <iostream>
using namespace std;

int main() {

	double inputVal1;
	double inputVal2;

	cout << "Please enter two positive integers, separated by a space:" << endl;
	cin >> inputVal1 >> inputVal2;

	cout << inputVal1 << " + " << inputVal2 << " = " << inputVal1 + inputVal2<<endl;
	cout << inputVal1 << " - " << inputVal2 << " = " << inputVal1 - inputVal2 << endl;
	cout << inputVal1 << " * " << inputVal2 << " = " << inputVal1 * inputVal2 << endl;
	cout << inputVal1 << " / " << inputVal2 << " = " << inputVal1 / inputVal2 << endl;
	cout << inputVal1 << " div " << inputVal2 << " = " << (int)inputVal1 / (int)inputVal2 << endl;
	cout << inputVal1 << " mod " << inputVal2 << " = " << (int)inputVal1 % (int)inputVal2 << endl;
    return 0;
}

