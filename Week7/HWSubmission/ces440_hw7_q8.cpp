/*
Author: Courtney Scott
Date: 10/25/2017
*/


#include <iostream>
using namespace std; 


void insertionSort(int a[], int aSize);


int main(){
    int arr1[10]={8,6,10,2,16,4,18,14,12,10};
    insertionSort(arr1, 10);

    for(int i=0; i<10; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    int arr2[6]={10,100,1000,10,100,1};
    insertionSort(arr2, 6);

    for(int i=0; i<6; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    int arr3[9]={1,4,1,4,1,4,1,4,4};
    insertionSort(arr3, 9);

    for(int i=0; i<9; i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    return 0;
}


void insertionSort(int a[], int aSize){

    // outer loop (controls sorted and unsorted sizes)
    for(int i=0; i<aSize; i++){
        // inner loop (controls elements within sorted partition)
        int j=0;
        while(j<i){
            // if arr[j]>arr[j+1], swap elements 
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];                
                a[j+1]=temp;
                j=-1;
            }

            j++;
        }
    }
}
