/*
Author: Courtney E. Scott
Date: 10/08/2017

Task:
1. Implement	the	function:	int minInArray(int arr[], int arrSize)		
This	function	is	given	arr,	an	array	of	integers,	and	its	logical	size,	arrSize.	When	called, it	returns	the	minimum	value	in	arr.	
	
2. Write	a	program	that	reads	from	the	user	a	sequence	of	20	integers	(unnecessarily	different from	one	another)	into	an	array,	and	outputs	the	minimum	value and	all	the	indices	it appears	in	the	array.		
*/


#include <iostream>
using namespace std; 


int minInArray(int arr[], int arrSize);
void minIndicies(int minArrVal, int arr[], int arrSize);


int main(){
    const int ARRAY_SIZE=20; 
    int arr[ARRAY_SIZE], arrElement, minArrVal;
    // counter variable
    int i;

    cout<<"Please enter 20 integers seperated by a space:"<<endl;

    // creates array based on user input
    for(i=0; i<ARRAY_SIZE; i++){
        cin>>arrElement;
        arr[i]=arrElement;
    }

    minArrVal=minInArray(arr, ARRAY_SIZE);
    cout<<"The minimum value is "<<minArrVal<<" , and it is located in the following indicies: ";
    minIndicies(minArrVal, arr, ARRAY_SIZE);
    cout<<"\n\n";

    return 0; 
}


// finds min array value
int minInArray(int arr[], int arrSize){
    int minArrVal;
    // counter variable
    int i;

    // iterate through array find smallest value and store its index and value
    for(i=0, minArrVal=arr[0]; i<arrSize; i++){

        // if elem(n)<elem(n-1) store value
        if(arr[i]<minArrVal){
            minArrVal=arr[i];
        }
    }

    return minArrVal;
}


// finds the indicies where min array value resides
void minIndicies(int minArrVal, int arr[], int arrSize){
    int minArrIndicies;
    // counter variable
    int i;

    // searches through main array, prints indicies of minArrVal
    for(i=0; i<arrSize; i++){
        
        if(arr[i]==minArrVal){
            cout<<i<<" ";
        }
    }
}