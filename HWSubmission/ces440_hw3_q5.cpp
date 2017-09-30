/*
Author: Courtney E. Scott
Date: 09/23/2017

Task: 
Write	a	program	that	asks	the	user	to	input	a	positive	integer	n,	and	prints	a	textual	image	of	an	
hourglass	made	of	2n	lines	with	asterisks.		
*/

#include <iostream>
using namespace std;

int main() {
    int inputSize, numRows, numSpaces, numStars;

    cout<<"Enter a positive integer value for the hourglass size:  ";
    cin>>inputSize;
    cout<<endl;
    
    // iterates up numRows
    for(numRows=inputSize; numRows>0; numRows--){
        // iterates spaces
        for(numSpaces=0; numSpaces<(inputSize-numRows); numSpaces++){
            cout<<' ';
        }
        // iterates stars
        for(numStars=0; numStars<(2*numRows-1); numStars++){
            cout<<'*';   
        }
        // break row
        // cout<<numRows<<endl;
        if(numRows<=1){
            break;        
        }
        else{
            cout<<endl;            
        }
    }

    // iterates down numRows
    for(numRows=0; numRows<=inputSize; numRows++){
        // iterates spaces
        for(numSpaces=0; numSpaces<(inputSize-numRows); numSpaces++){
            cout<<' ';
        }
        // iterates stars
        for(numStars=0; numStars<(2*numRows-1); numStars++){
            cout<<'*';   
        }
        // break row
        cout<<endl;
    }
    return 0;
}