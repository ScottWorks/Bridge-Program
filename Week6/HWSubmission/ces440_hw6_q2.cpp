/*
Author: Courtney Scott
Date: 10/15/2017
Task: Given a sorted array of integers created on the heap, its size and a new integer, design a function which will enlarge the array and place the new item in the appropriate position in the array, so that it remains sorted.  
*/ 


#include <iostream>
using namespace std;


void exxxtendo(int *&arr, int size, int newInteger);


int main(){
    
    const int ARRAY_SIZE=9;    
    int *heapArr=new int[ARRAY_SIZE]; 
    int userInput;

    cout<<"Sorted String w/o New Entry:"<<endl;    
    for(int i=0; i<ARRAY_SIZE; i++){
        heapArr[i]=i;
        cout<<heapArr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter a value:   ";
    cin>>userInput; 

    exxxtendo(heapArr, ARRAY_SIZE, userInput);

    cout<<"Sorted String w/ New Entry:"<<endl;
    for(int i=0; i<ARRAY_SIZE+1; i++){
        cout<<heapArr[i]<<" ";
    }   
    cout<<endl;

    heapArr=NULL;
    delete [] heapArr;
}


void exxxtendo(int *&arr, int size, int newInteger){

    int newSize=2*size, i, j;
    int *temp=new int[newSize];

    for(i=0; i<size; i++){
        temp[i]=arr[i];
    }

    arr=temp;

    arr[size++]=newInteger;
    
    temp=NULL;     
    delete [] temp;

    for(i=0; i<size; i++){
        
        for(j=0; j<size; j++){
            
            if(arr[i]<arr[j]){
                int temp=arr[i]; 
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
