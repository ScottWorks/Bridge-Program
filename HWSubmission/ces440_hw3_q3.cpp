/*
Author: Courtney E. Scott
Date: 09/24/2017

Task: 
Write	a	program	that	reads	from	the	user	a	positive	integer	(in	a	decimal	representation),	and	
prints	its	binary	(base	2)	representation.	
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() { 
    int base10, base2Power, remains;
    double base2;
    bool flag;

    cout<<"Enter decimal number:"<<endl;
    cin>>base10;
    cout<<"The binary representation of "<<base10<<" is ";    

// finds first value where base10>base2
flag=false;
while(flag==false){
    // iterate through base2 powers i.e. 2^32, 2^31,...,2^0
    for(base2Power=32, base2=0; base2Power>=0; base2Power--){
        base2=pow(2, base2Power);
        // raise flag when value is found, exit loop
        if(base10>=base2){
            flag=true;
            break;
        }
    }
}

    //uses last exponent value from previous loop, starts printing binary
    for(base2Power=base2Power, remains=base10; base2Power>=0; base2Power--){
        base2=pow(2, base2Power);
        // print out 1 or 0 
        if(remains>=base2){
            remains-=base2;                    
            cout<<'1';
        }
        else if(remains<base2) {        
            cout<<'0';
        }
        else {
            cout<<"Error! Please enter a valid number...";
       }   
    }
    // line break
    cout<<endl;
    return 0;
}