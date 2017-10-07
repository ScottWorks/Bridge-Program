/*
Author: Courtney E. Scott
Date: 10/01/2017

Task: 
The	Fibonacci	numbers	sequence,	F n ,	is	defined	as	follows:	
F 0 	is	1,	F 1 	is	1,	and	F n 	=	F n-1 	+	F n-2 	  for	n	=	2,	3,	4,	...		
In	other	words,	each	number	is	the	sum	of	the	previous	two	numbers.	The	first	10	numbers	
in	Fibonacci	sequence	are:	1,	1,	2,	3,	5,	8,	13,	21,	34,	55			
*/


#include <iostream>
using namespace std; 


int fib(int n);

int main(){
    int num, result; 

    cout<<"Please enter a positive integer: ";
    cin>>num;

    result=fib(num);
    cout<<result<<endl;

    return 0;
}


int fib(int n){
    int count, nthElement, currentElement, previousElement;

    // generate numbers until n==num
    for(count=0, currentElement=1; count<n; count++){

        // perform math operations needed to calculate Fibonacci seq.
        nthElement=currentElement+previousElement;       
        if(count==1){
            nthElement=1;
        }         
        previousElement=currentElement;
        currentElement=nthElement;
                   
    }

    return nthElement;
}