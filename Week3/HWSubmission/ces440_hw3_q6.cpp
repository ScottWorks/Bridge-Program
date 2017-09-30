/*
Author: Courtney E. Scott
Date: 09/24/2017

Task: 
Write	a	program	that	asks	the	user	to	input	a	positive	integer	n,	and	print	all	of	the	numbers	
from	1	to	n	that	have	more	even	digits	than	odd	digits.		
*/

#include <iostream>
using namespace std; 

int main(){
    int inputVal, oddCount, evenCount, count, countSort, currVal; 

    cout<<"Enter a positive integer:    ";
    cin>>inputVal;

    // starts conting from 1 to n
    for(count=0; count<=inputVal; count++){
        
        // if flag is raised exit loop
        bool flag=false;
        currVal=0;
        oddCount=0;
        evenCount=0;
        countSort=count;
        while(flag==false){  

            // break down input val
            currVal=countSort%10;
            countSort=countSort/10;      
            
            // print count and exit only if break down of input is finished and eventCount>oddCount
            if(countSort<=0 && currVal<=0 && evenCount>oddCount){
                cout<<count<<endl;      
                flag=true;
            }   

            // exit only if break down of input is finished and Oddcount>=evenCount
            else if(countSort<=0 && currVal<=0 && evenCount<=oddCount){
                flag=true;          
                }

            else if(currVal%2==1){
            oddCount++;           
            }

            else if(currVal%2==0){
            evenCount++;            
            }                       
        }            
    }
    return 0;
}