/*
Author: Courtney E. Scott
Date: 10/03/2017

Task: 
A) Write	a	function:	
void analyzeDividors(int num, int& outCountDivs, int& outSumDivs) 	
The	function	takes	as	an	input	a	positive	integer	num	(≥	2),	and	updates	two	output	
parameters	with	the	number	of	num's	proper	divisors	and	their	sum.		
For	example,	if	this	function	is	called	with	num=12,	since	1,	2,	3,	4	and	6	are	12s	proper	
divisors,	the	function	would	update	the	output	parameters	with	the	numbers	5	and	16.	
Note:	Pay	attention	to	the	running	time	of	your	function.	An	efficient	implementation	would	
run	in	Θ*sqrt(num) .	

B) Use	the	function	you	wrote	in	section	(a),	to	implement	the	function:	
bool isPerfect(int num)	
This	functions	is	given	positive	integer	num	(≥	2),	and	determines	if	it	is	perfect	number	or	
not.	

C) Use	the	functions	you	implemented	in	sections	(a)	and	(b),	to	write	a	program	that	reads	
from	the	user	a	positive	integer	M	(≥	2),	and	prints:	
• All	the	perfect	numbers	between	2	and	M.	
• All	pairs	of	amicable	numbers	that	are	between	2	and	M	(both	numbers	must	be	in	the	
range).		
Note:	Pay	attention	to	the	running	time	of	your	implementation.	An	efficient	algorithm	for	
this	part	would	call	 analyzeDivisors 	Θ M 	times	all	together.	
*/



#include <iostream>
#include <cmath>
using namespace std;

void analyzeDivisors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);

int main(){
    int ans, m, outCountDivs, outSumDivs,storeOutSumDivs;
    // counter variables
    int i;
    
    cout<<"\n\n";       
    cout<<"Please enter a positive integer >=2: ";    
    cin>>m;
    cout<<"\n\n";    
    
    if(m<2){
        cout<<"Invalid entry, value must be greater than 2...\n\n";
        return 0;
    }
    
    // if m>=2... 
    else{   

        // iterate through values between 2 and m
        cout<<"Perfect Numbers between 2 and M are:"<<endl;
        for(i=2; i<=m; i++){
            ans=isPerfect(i);

            // if m is a perfect number, then print m
            if(ans==1){
                cout<<i<<endl;
            }
        }

        cout<<"\n\n";   
        cout<<"Amicable Numbers between 2 and M are:"<<endl;
        for(i=2; i<=m; i++){
            analyzeDivisors(i, outCountDivs, outSumDivs);
            analyzeDivisors(outSumDivs, outCountDivs, storeOutSumDivs);
           
            if(i==storeOutSumDivs && i<outSumDivs){
                cout<<"("<<i<<", "<<outSumDivs<<")"<<endl; 
            }
        }

        cout<<"\n\n";            
    }

    return 0;
}


void analyzeDivisors(int num, int& outCountDivs, int& outSumDivs){
    int numStore;
    // counter variables
    int i;
    
    outCountDivs=0;
    outSumDivs=0;
    for(i=1; i<sqrt(num); i++){
        if(num%i==0){
            outCountDivs++;
            outSumDivs+=i;
        }
    }

    for(i=sqrt(num); i>1; i--){
        if(num%i==0){
            numStore=num/i;
            outCountDivs++;
            outSumDivs+=numStore;
        }
    }
}


bool isPerfect(int num){
    int outCountDivs, outSumDivs;

    analyzeDivisors(num, outCountDivs, outSumDivs);
    if(outSumDivs==num){
        return true;
    }
    return false; 
}



