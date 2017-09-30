/*
Author: Courtney E. Scott
Date: 09/23/2017

Task: 
Write	two	versions	of	a	program	that	reads	a	sequence	of	positive	integers	from	the	user,	
calculates	their	geometric	mean,	and	print	the	geometric	mean.	
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int count, inputVal, newVal, oldVal, product;
    double inputLength, power, result;
    bool flag;

    cout<<"Section A"<<endl;
    cout<<"Please enter length of the sequence: ";
    cin>>inputLength;
    
    cout<<"Please enter your sequence:  "<<endl;    
    for(count=0, newVal=0, oldVal=1; count<inputLength; count++){
    cin>>inputVal;

    newVal = inputVal * oldVal;
    oldVal = newVal; 
    }   

    power = 1/inputLength;
    result=(double)pow(newVal,power);
    cout.precision(5);    
    cout<<"The geometric mean is:   "<<result<<endl;
    cout<<endl;
    
    cout<<"Section B"<<endl;
    cout<<"Please enter a non-empty sequence of positive integers, each one in a seperate line, End your sequence by typing -1: "<<endl;
    
    flag==false;
    count=0;
    newVal=0;
    oldVal=1;
    while(flag==false){
        cin>>inputVal;

        if(inputVal==-1){
            flag=true;
        }

        else{
            newVal = inputVal * oldVal;
            oldVal = newVal; 
        }
    }
     
    power = 1/inputLength;
    result=(double)pow(newVal,power);
    cout.precision(5);
    cout<<"The geometric mean is:   "<<result<<endl;

    return 0;
}