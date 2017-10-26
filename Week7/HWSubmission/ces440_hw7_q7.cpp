/*
Author: Courtney Scott
Date: 10/24/2017
*/

#include <iostream>
using namespace std;


int findChange(int arr01[], int arr01Size);


int main(){
    int arr1[8]={0,0,0,0,0,1,1,1};
    int res1=findChange(arr1, 8); // should return 5
    cout<<"Result 1:\t"<<res1<<endl;

    int arr2[8]={0,0,1,1,1,1,1,1};
    int res2=findChange(arr2, 8); // should return 2
    cout<<"Result 2:\t"<<res2<<endl;

    int arr3[6]={0,0,0,1,1,1};
    int res3=findChange(arr3, 6); // should return 3
    cout<<"Result 3:\t"<<res3<<endl;

    int arr4[7]={1,1,1,1,1,1,1};
    int res4=findChange(arr4, 7); // should return 0
    cout<<"Result 4:\t"<<res4<<endl;

    int arr5[2]={0,1};
    int res5=findChange(arr5, 2); // should return 1
    cout<<"Result 5:\t"<<res5<<endl;


    return 0;
}


int findChange(int arr01[], int arr01Size){
    int first=0, mid=arr01Size/2, last=arr01Size-1;
    
    while(first<=mid && last>=mid){

        if(arr01[mid]==1){

            if(arr01[first]==1){
                return first; 
            }
        
            first++;
        }

        else if (arr01[mid]==0){
            
            if(arr01[last]==0){
                    return last+1; 
            }
            
            last--;
        }
    }

    return -1;
}