/* 
Author: Courtney E. Scott
Date: 10/08/2017

Task:
Implement	following	functions:		
a. void reverseArray(int arr[], int arrSize) That	takes	arr,	an	array	of	integers,	and	its	size,	arrSize.	When	called,	it	reorders	the elements	of	the	array	to	appear	in	a	reverse	order. For	example,	if	arr	is	an	array	containing	[1,	2,	3,	4],	after	calling	reverseArray,	arr	will	look	like:	[4,	3,	2,	1].	
	
b. 	void removeOdd(int arr[], int& arrSize) 	
That	takes 	 arr,	an	array	of	integers,	and	its	size,	arrSize.	When	called,	the	function alters	arr	so	that	the	only	numbers	in	it	at	the	end	are	the	even	ones,	which	should	remain in	their	original	relative	order. Additionally,	the	function	updates	arrSize	so	it	contains	the	new	logical	size	of	the	array after	removing	the	odd	numbers	(note	that	arrSize	is	a	parameter	used	both	for	input	
and	output). For	example,	if	arr	is	an	array	containing	[1,	2,	3,	4],	after	calling	removeOdd,	arr	will look	like:	[2,	4],	and	the	parameter	arrSize	will	update	to	2.	Notice	the	values	in	arr[2]	
and	arr[3]	are	discarded.	
	
c. void splitParity(int arr[], int arrSize)
That	takes 	 arr,	an	array	of	integers,	and	its	size,	arrSize.	When	called,	the	function changes	the	order	of	numbers	in	arr	so	that	all	the	odd	numbers	will	appear	first,	and	all	
the	even	numbers	will	appear	last.	Note	that	the	inner	order	of	the	odd	numbers	and	the	inner	order	of	the	even	numbers	don’t	matter.	For	example,	if	arr	is	an	array	containing	[1,	2,	3,	4],	after	calling	splitParity,	arr	could	look	like:	[3,	1,	2,	4].
*/


#include <iostream>
using namespace std;


void printArray(int arr[], int arrSize);
void reverseArray(int arr[], int arrSize);
void removeOdd(int arr[], int& arrSize);
void splitParity(int arr[], int arrSize);


int main() {
    int arr1[10] = {9, 2, 14, 12, -3};
    int arr1Size = 5;
    int arr2[10] = {21, 12, 6, 7, 14};
    int arr2Size = 5;
    int arr3[10] = {3, 6, 4, 1, 12};
    int arr3Size = 5;
    reverseArray(arr1, arr1Size);
    printArray(arr1, arr1Size);
    removeOdd(arr2, arr2Size);
    printArray(arr2, arr2Size);
    splitParity(arr3, arr3Size);
    printArray(arr3, arr3Size);

    return 0;
}


void printArray(int arr[], int arrSize){
    int i;
    
    for (i = 0; i < arrSize; i++) {
        cout<<arr[i]<<' ';
    }
        cout<<endl;
}


void reverseArray(int arr[], int arrSize){
    int i, j; 
    int storeVal;

    for(i=(arrSize-1), j=0; j<=arrSize/2; i--, j++){
        storeVal=arr[j];        
        arr[j]=arr[i];
        arr[i]=storeVal;
    }
        
    cout<<endl;
}


void removeOdd(int arr[], int& arrSize){
    int i, j;
    int arrEven[arrSize]; 

    for(i=0, j=0; i<arrSize; i++){

        if(arr[i]%2==0){
            arr[j]=arr[i];
            j++;
        }
    }

    arrSize=j;
    cout<<endl;    
}


void splitParity(int arr[], int arrSize){
    int i;
    int tempVal=0; 

    // move through index
    for(i=0; i<arrSize; i++){

        // if n is even && n+1 is odd, swap positions
        if(arr[i]%2==0 && arr[i+1]%2==1){
            tempVal=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=tempVal;
            
            // resets counter so all numbers are swapped in array
            i=0;
        } 
    }

    cout<<endl;
}
