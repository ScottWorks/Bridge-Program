/*
Author: Courtney E. Scott
Date: 10/03/2017

Task: 
A) Implement a function: void printDivisors(int num)
This	function	is	given	a	positive	integer	num,	and	prints	all	of	num’s	divisors	in	an	ascending	
order,	separated	by	a	space.	

Implementation	requirement:	Pay	attention	to	the	running	time	of	your	function.	An efficient	implementation	would	run	in	Θsqrt(num)

B) Use	the	function	above	when	implementing	a	program	that	reads	from	the	user	a	positive	
integer	(≥2),	and	prints	all	it’s	divisors.
*/


#include <iostream>
#include <cmath>
using namespace std;

void printDivisors(int num);


int main(){
    int num;

    cout<<"Please enter a positive integer >=2: ";
    cin>>num;

    if(num<2){
        cout<<"Invalid entry, value must be greater than 2...\n\n";
        return 0;
    }

    else{
        printDivisors(num);
    }

    return 0; 
}


void printDivisors(int num){
    // counter variables
    int i, numPrint;

    // prints first half of divisors
    for(i=1; i<sqrt(num); i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }

    // prints second half of divisors
    for(i=sqrt(num); i>0; i--){
        if(num%i==0){
            numPrint=num/i;
            cout<<numPrint<<" ";            
        }
    }
    cout<<"\n\n";
}


