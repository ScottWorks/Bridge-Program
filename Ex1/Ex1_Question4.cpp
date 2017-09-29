/*
Author: Courtney E. Scott
Date: 09/29/2017

Task: Write a program that accepts user input a positive integer value and outputs a triangle as shown below.
i.e. 

Please enter a positive integer:
5
    *
   ***
  *****
 *******
*********

*/

#include <iostream>
using namespace std;

int main() {	
	int userInput, numRow, numSpace, count;
	bool flag; 

	cout<<"Please enter a positive integer: "<<endl;
	cin>>userInput;    
	
	numRow=1;
	// create while loop that stops when flag is raised
	while(numRow<=userInput){
		

        // for loop prints empty spaces
        for(count=(userInput-numRow); count>0; count--){
            cout<<" "; 
        }

		// for loop prints stars
		for(count=1; count<=((numRow*2)-1); count++){
			cout<<"*"; 
		}

		numRow++;

		// at end of loop break line
		cout<<endl; 


	}
			
return 0;
}