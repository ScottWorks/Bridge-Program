/*
Author: Courtney Scott
Date:10/22/2017
*/


#include <iostream>
using namespace std; 


int minInArray1(int arr[], int arrSize);
int minInArray2(int arr[], int low, int high);


int main() {
    int arr[10] = {9, -2, 14, 12, 3, 6, 2, 1, -9, 15};
    int res1, res2, res3, res4;
    res1 = minInArray1(arr, 10);
    res2 = minInArray2(arr, 0, 9);
    cout<<res1<<" "<<res2<<endl; //should both be -9
    res3 = minInArray2(arr, 2, 5);
    res4 = minInArray1(arr+2, 4); //arr+2 is equivalent to &(arr[2])
    cout<<res3<<" "<<res4<<endl; //should both be 3
    return 0;
    }


int minInArray1(int arr[], int arrSize){
    int i=1, res=0, tempMin=arr[0];
   
    if(arrSize==i){
        return arr[0];
    }

    else{
        res=minInArray1(arr+1, arrSize-1);
        if(res<tempMin){
            tempMin=res;
        }
    }
    
    return tempMin;
}


int minInArray2(int arr[], int low, int high){
    int res=0, tempMin=arr[low]; 

    if(low==high){        
        return arr[low];
    }

    else{
        res=minInArray2(arr, low+1, high);        
        if(res<tempMin){
            tempMin=res;
        }
    }    

    return tempMin;
}