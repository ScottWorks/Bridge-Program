/*
Author: Courtney Scott
Date: 10/24/2017
*/


#include <iostream>
using namespace std;


int binarySearch(int arr[], int arrSize, int val);


int main(){
    int arr1[7]={0,1,3,5,6,10,12};

    int res1=binarySearch(arr1, 7, 5);
    cout<<"Result 1:\t"<<res1<<endl;   // returns 3 

    int arr2[3]={5,6,7};

    int res2=binarySearch(arr2, 3, 5);
    int res3=binarySearch(arr2, 3, 7);    
    cout<<"Result 2:\t"<<res2<<endl;   // returns 0 
    cout<<"Result 3:\t"<<res3<<endl;   // returns 2 
    
    int arr3[9]={2,10,11,12,30,50,600,1000,1200};

    int res4=binarySearch(arr3, 9, 11);   // returns 2 
    int res5=binarySearch(arr3, 9, 1000); // returns 7
    int res6=binarySearch(arr3, 9, 1);    // returns -1  
    int res7=binarySearch(arr3, 9, 1201); // returns -1 
    int res8=binarySearch(arr3, 9, 31);   // returns -1     
    cout<<"Result 4:\t"<<res4<<endl;
    cout<<"Result 5:\t"<<res5<<endl;
    cout<<"Result 6:\t"<<res6<<endl;
    cout<<"Result 7:\t"<<res7<<endl;
    cout<<"Result 8:\t"<<res8<<endl;
    
    return 0;
}


int binarySearch(int arr[], int arrSize, int val){
    int first=0, mid=arrSize/2, last=arrSize-1;
    
    if(val==arr[mid]){
        return mid; 
    }

    else{

        while(first<mid && last>mid){

            if(val<arr[mid]){

                if(val==arr[first]){
                    return first;
                }

                first++;                
            }
    
            else{
                    
                if(val==arr[last]){
                    return last;
                }

                last--;                
            }
        }
        
        return -1; 
        }
}