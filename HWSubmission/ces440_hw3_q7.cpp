/*
Author: Courtney E. Scott
Date: 09/24/2017

Task: 
Write	a	program	that	reads	a	positive	integer	n	from	the	user	and	prints	out	a	nxn	
multiplication	table.	The	columns	should	be	spaced	by	a	tab.		
*/

#include <iostream>
using namespace std;

int main(){
    int input, numRow, numCol, output;

    cout<<"Please enter a positive integer:"<<endl;
    cin>>input;
    
    numCol=1;
    // stops for loop when numCol = input
    while(numCol<=input){

        //generate a row of numbers
        for(numRow=1; numRow<=input; numRow++){
            //multiply each number by numCol
            output=numRow*numCol;
            cout<<output<<"\t";      
        }
        //create new row
        cout<<endl;
        
        //increment numCol
        numCol++;
    }
    return 0;
}