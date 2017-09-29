/*
Author: Courtney E. Scott
Date: 09/29/2017

Task: Write a program that accepts user input and sums the odd digits for each number entered. The numbers shall be entered sequestially, when the user has completed the program use -1 to exit the program. The output should include the number with the lowest odd-digit summation and the line number associated with the number. 

*/


#include <iostream>
using namespace std;


int main() {
    
	int userInput, numLine, sum, currDigit, oldSum, storedVal, linePrint, oddCount, tempInput, lowestSum; 

	cout<<"Enter a sequence of positive integers with values ranging from 1 to 1,000,000, each in a seperate line. End your sequence by entering -1:"<<endl;

	oldSum=1000001;
	lowestSum=1000001;
	numLine=1;
	
	// create loop that only stops when flag is raised
	while(userInput!=-1){
		cin>>userInput;		
		tempInput=userInput;

		if(userInput>0 && userInput<1000000){
			oddCount=0;
			sum=0;
			
			while(userInput>0){
				currDigit=userInput%10;
				userInput=userInput/10;
				
				// if current digit is odd, add digit to oddCount
				if(currDigit%2==1){
					oddCount=currDigit+sum;
                }
                sum=oddCount;
			}
		}
		else if(userInput<-1 || userInput>1000000){
			cout<<"Error, please enter a value between 1 and 1,000,000..."<<endl;
			return 0;
		}					
		// compare sum with previous sum and lowest sum, if sum is less than both, store the new lowestSum, current userinput, and current numline
		if(sum<oldSum && sum<=lowestSum){
			lowestSum=sum;
			storedVal=tempInput;
			linePrint=numLine;
		}

		numLine++;
		oldSum=sum;	
	}
		
cout<<storedVal<<" is a number with the smallest odd-digits sum. You entered it on line "<<linePrint<<endl; 
return 0;
}