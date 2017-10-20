/*
Author: Courtney Scott
Date: 10/15/2017
Task: Write a function that takes a C string (that is, an array of characters) as an input parameter and reverses the string.  The function should use two ps, front and rear.  The front p should initially reference the first character in the string, and the rear p should initially reference the last character in the string.  Reverse the string by swapping characters referenced by front and rear then increment front to point to the next character and decrement rear to point to the preceding character, and so on, until the entire string is reversed.  Make sure to test your function with both odd and even sized arrays. 
*/ 


#include <iostream>
#include <cstring>
using namespace std; 


void reverse(char *arr);    


int main(){
    const int MAX=256;
    char *charArr=new char[MAX];

    cout<<"Enter something wise..."<<endl; 
    cin.getline(charArr, MAX);
    
    reverse(charArr);  

    cout<<"\nInput Reverse: "<<charArr<<endl;

    charArr=NULL;        
    delete [] charArr;
    
    return 0;
}


void reverse(char *arr){
    char *frontPtr=&arr[0];
    char *rearPtr=&arr[strlen(arr)-1];

    while(frontPtr<rearPtr){
        char temp=*frontPtr;        

        *frontPtr=*rearPtr;
        *rearPtr=temp;
        
        frontPtr++;
        rearPtr--;
    }
}