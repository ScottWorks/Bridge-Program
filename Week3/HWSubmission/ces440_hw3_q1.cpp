/*
Author: Courtney E. Scott
Date: 09/22/2017

Task: Write	two	versions	of	a	program	that	reads	a	positive	integer	n,	and	prints	the	first	n	even	
numbers.		
a) In	the	first,	use	a	while	loop.		
b) In	the	second,	use	a	for	loop.		
*/

#include <iostream>
using namespace std; 

int main() {
    int inputVal, tick, output; 

    cout<<"Please enter a positive integer: ";
    cin>>inputVal; 
    
    cout<<"Section A"<<endl; // Code implemented using while-loop

    tick = 1;
    output = 0;
    while(tick <= inputVal) {
        output += 2;
        cout<<output<<endl;        
        tick++;
    }

    cout<<"Section B"<<endl; // Code implemented using for-loop

    for(tick = 1, output = 0; tick <= inputVal; tick++) {
        output += 2;
        cout<<output<<endl;
    }
    return 0;
}
