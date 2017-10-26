/*
Author: Courtney Scott
Date: 10/23/2017
*/

#include <iostream>
using namespace std; 


int gameScore(int arr[], int arrSize, int limit);


int main(){
    int arr1[6]={0, 3, 80, 6, 57, 10}; // should return 19
    int sum1=gameScore(arr1, 6, 6);
    cout<<"Score:\t"<<sum1<<endl;

    int arr2[9]={0, 3, 2, 1, 2, 0, 20, 10, 9}; // should return 22
    int sum2=gameScore(arr2, 9, 9);
    cout<<"Score:\t"<<sum2<<endl;

    int arr3[4]={0, 1, 2, 10}; // should return 11
    int sum3=gameScore(arr3, 4, 4);
    cout<<"Score:\t"<<sum3<<endl;

    return 0; 
}


int gameScore(int arr[], int arrSize, int limit){

    if(arrSize<=1){
        return arr[0];        
    }

    else{
        
        if(arr[arrSize-1]<arr[arrSize-2] && arrSize<limit){
            return arr[arrSize-1]+gameScore(arr, arrSize-1, limit);
        }

        else if(arr[arrSize-1]>=arr[arrSize-2] && arrSize<limit){
            return arr[arrSize-2]+gameScore(arr, arrSize-2, limit);            
        }

        else{
            return arr[arrSize-1]+gameScore(arr, arrSize-1, limit);            
        }
    }
}

































