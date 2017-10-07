/*
Author: Courtney E. Scott
Date: 10/01/2017

Task: 
Write	a	program	that,	prints	a	‘pine	tree’	consisting	of	triangles	of	increasing	sizes,	filled	
with	a	character	(eg.	‘*’	or	’+’	or	‘$’	etc).		
Your	program	should	interact	with	the	user	to	read	the	number	of	triangles	in	the	tree	and	
the	character	filling	the	tree.			
*/

#include <iostream>
using namespace std; 

void printShiftedTriangle(int n, int m, char symbol);
void printPineTriangle(int n, char symbol);


int main(){

    int printSelect, inputSize, inputSpace, resultTriangle, resultPineTree;
    char inputChar;

    cout<<"Please enter '1' if you would like to see a trinagle and '2' if you would like to see a pine tree."<<endl;
    cin>>printSelect;

    switch(printSelect){

        case 1:
            cout<<"You chose a traingle! Please enter the traingle size in number of rows, number of spaces shifted from margin, and character type (e.g. '*' or '+' or '$')."<<endl;
            cin>>inputSize>>inputSpace>>inputChar;
            cout<<endl;            
            printShiftedTriangle(inputSize, inputSpace, inputChar);
            break;

        case 2: 
            cout<<"You chose a pine tree! Please enter the size in max number of pine trees, and character type (e.g. '*' or '+' or '$')."<<endl;
            cin>>inputSize>>inputChar;
            cout<<endl;
            printPineTriangle(inputSize, inputChar);
            break;

        default: 
            cout<<"Error, entry does not compute!"<<endl;
    }

    return 0;
}


void printShiftedTriangle(int n, int m, char symbol){
    // counter variables
    int i, j;

    // sets number of rows
    for(i=1; i<=n; i++){

        // sets number of spaces in each row
        for(j=((n-i)+m); j>0; j--){
            cout<<" ";
        }

        // sets number of characters in each row
        for(j=((i*2)-1); j>0; j--){
            cout<<symbol;
        }

        cout<<endl;
    }
}



void printPineTriangle(int n, char symbol){
    // counter variables
    int i, j, k;

    // sets number of trees
    for(k=1; k<=n; k++){

        // sets number of rows
        for(i=1; i<=k+1; i++){
        
            // sets number of spaces in each row
           for(j=((n-i)+1); j>0; j--){
                    cout<<" ";
            }
        
            // sets number of characters in each row
            for(j=((i*2)-1); j>0; j--){
                cout<<symbol;
            }
            
            cout<<endl;
        }
    }
}


