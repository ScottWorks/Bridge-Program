/*
Author: Courtney Scott
Date: 10/22/2017
*/

#include <iostream>
#include <cmath>
using namespace std;


int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);


int main(){
    const int ARRAY_SIZE=4;
    int inputArr[ARRAY_SIZE]={2,5,7,10};  
    int sum=0;
    bool sort;  

    cout<<"Part A:"<<endl;
    sum=sumOfSquares(inputArr, ARRAY_SIZE);
    cout<<sum<<endl;

    cout<<"\nPart B:"<<endl;
    sort=isSorted(inputArr, ARRAY_SIZE);
    if(sort==1){
        cout<<"True"<<endl;
    }

    else if(sort==0){
        cout<<"False"<<endl;        
    }
    

    return 0; 
}


int sumOfSquares(int arr[], int arrSize){
    int i=1, res=0;

    if(i==arrSize){
        return pow(arr[0],2);
    }

    else{
        res=sumOfSquares(arr+1, arrSize-1);
        res+=pow(arr[0],2);
        return res;
    }
}


bool isSorted(int arr[], int arrSize){
    int i=1, res=0;

    if(i==arrSize){
        return true;
    }
    
    else{
        res=isSorted(arr+1, arrSize-1);
        if(res>arr[i]){
            return false;
        }
    }
}
