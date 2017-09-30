/*
Author: Courtney E. Scott
Date: 09/22/2017

Task: 
In	this	question	we	will	use	a	simplified	version	of	the	Roman	Numerals	System	to	represent	
positive	integers.	
	
The	digits	in	this	system	are	I,	V,	X,	L,	C,	D	and	M.	Each	digit	corresponds	to	a	decimal	value,	as	
showed	in	the	following	table:

A	number	in	the	simplified	Roman	numerals	system	is	a	sequence	of	Roman	digits,	which	follow	
these	2	rules:	

<Tabled Omitted>

1. The	digits	form	a	monotonically	non-increasing	sequence.	That	is	the	value	of	each	digit	is	
less	than	or	equal	to	the	value	of	the	digit	that	came	before	it.		
For	example,	DLXXVI	is	a	monotonically	non-increasing	sequence	of	Roman	digits,	but	XIV	is	
not.	
2. There	is	no	limit	on	the	number	of	times	that	‘M’	can	appear	in	the	number.	
‘D’,	‘L’	and	‘V’	can	each	appear	at	most	one	time	in	the	number.	
‘C’,	‘X’	and	‘I’	can	each	appear	at	most	four	times	in	the	number.	
For	example:	IIII,	XVII	and	MMMMMMDCCLXXXXVII	are	legal	numbers	in	our	simplified	Roman	
numeral	system,	but	IIIII,	XIV,	VVI	and	CCXLIII	are	not.	
Write	a	program	that	reads	from	the	user	a	(decimal)	number,	and	prints	it’s	representation	in	
the	simplified	Roman	numerals	system.	
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int userInput, counter, currDigit, scaleFactor, decimalValue,
     romanFactor, count, oldDecimalValue, reverseOrder;
     string output; 

    cout<<"Enter decimal number:    ";
    cin>>userInput;
    cout<<endl;    


    if(userInput<=0){
        cout<<"Error, please enter a value greater than 0..."<<endl;
        return 0;
    }
    else {
        cout<<userInput<<" is ";
    }

    /* Rule 1: 
        - dn < dn+1
    */

    /* Rule 2: 
        - 'M' has no limit on occurence
        - 'D', 'L', 'V' limited to 1 to occurences 
        - 'C', 'X', 'I' limited to 4 to occurences
    */

    counter = 0;
    reverseOrder = 0;
    currDigit = 0;

    while(userInput!=0) {
        currDigit = userInput%10;
        reverseOrder = reverseOrder*10+currDigit;
        userInput = userInput/10;
        counter++;
    }
    
    while(reverseOrder>0) {
        counter--;        
        currDigit = reverseOrder%10;
        reverseOrder = reverseOrder/10;
        scaleFactor = pow(10,counter);    

        decimalValue = currDigit*scaleFactor;
        romanFactor = 0;   

        if(decimalValue/1000 > 0) {
            romanFactor = decimalValue/1000;
            for(count=0; romanFactor > count; count++){
                output+="M";
            }
        }

        else if(decimalValue/500 > 0) { 
            romanFactor = decimalValue/500;            
            for(count=0; romanFactor > count; count++){
                output+="D";
                }
                
                decimalValue-=500;  
                romanFactor=decimalValue/100;
                for(count=0; romanFactor > count; count++){
                    output+="C";
                    }
                }

        else if(decimalValue/100 > 0) {
            romanFactor = decimalValue/100;
            for(count=0; romanFactor > count; count++){
                output+="C";
                }    
        }

        else if(decimalValue/50 > 0) { 
            romanFactor = decimalValue/50;            
            for(count=0; romanFactor > count; count++){
                output+="L";
                }
                
                decimalValue-=50;  
                romanFactor=decimalValue/10;
                for(count=0; romanFactor > count; count++){
                    output+="X";
                    }
                }

        else if(decimalValue/10 > 0) {
            romanFactor = decimalValue/10;
            for(count=0; romanFactor > count; count++){
                output+="X";
                }    
        }

        else if(decimalValue/5 > 0) { 
            romanFactor = decimalValue/5;            
            for(count=0; romanFactor > count; count++){
                output+="V";
                }
                
                decimalValue-=5;  
                romanFactor=decimalValue;
                for(count=0; romanFactor > count; count++){
                    output+="I";
                    }
                }

        else if(decimalValue > 0) {
            romanFactor = decimalValue;
            for(count=0; romanFactor > count; count++){
                output+="I";
                }    
        }
    }
    cout<<output<<endl;    
    return 0;
}