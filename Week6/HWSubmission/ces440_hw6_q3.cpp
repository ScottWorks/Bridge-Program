/*
Author: Courtney Scott
Date: 10/15/2017
Task: Write a problem that outputs a histogram of student grades for an assignment. The program should input each student’s grade as an integer and store the grade in a vector. Grades should be entered until the user enters a ‐1 for a grade. The program should then scan through the vector and compute the histogram. In computing the histogram, the minimum value of a grade is 0 but your program should determine the maximum value entered by the user.  Use a dynamic array to store the histogram.  Output the histogram to the console.  For example, if the input is: 

20 
30 
4 
20 
30 
30 
‐1 

Then the output should be: 
Number of 4’s: 1 
Number of 20’s: 2 
Number of 30’s: 3 
*/ 


#include <iostream>
#include <vector>
using namespace std; 


void sort(vector<int> vec);
void makeHistogram(vector<int> vec);
    

int main(){
    vector<int> inputVector; 
    int input; 

    cout<<"Enter student grades greater than 0, (when finished enter -1 in the prompt)."<<endl; 
    while(input!=-1){
        cin>>input;
        
        if(input>=0){
            inputVector.push_back(input);
        }
    }      

    makeHistogram(inputVector);
    
    return 0; 
}


void sortVect(vector<int> &vec){

    for(int i=0; i<vec.size(); i++){

        for(int k=0; k<vec.size(); k++){
            
            if(vec[i]<vec[k]){
                int temp=vec[k];
                vec[k]=vec[i];
                vec[i]=temp;               
            }
        }
    }
 
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" "; 
    }
    cout<<endl;
}


void makeHistogram(vector<int> vec){
    int i, k, count; // counter variables
    int vecSize=2*vec.size(); 
    int *countPtr=new int[vecSize]; 
    int *vecPtr=new int[vecSize]; 
    
    sortVect(vec);
    
    for(i=0, k=0; i<vec.size(); i++){
        i=k;
        
        for(count=0; k<vec.size(); k++, count++){
                    
            if(vec[i]!=vec[k]){
                *countPtr=count;        
                *vecPtr=vec[i];                 
                cout<<"Number of "<<*vecPtr<<"'s:\t"<<*countPtr<<endl;                
                *countPtr++;
                *vecPtr++;   
                break;
            }
            
            else if(k==vec.size()-1){
                count++;
                *countPtr=count;
                *vecPtr=vec[i];       
                cout<<"Number of "<<*vecPtr<<"'s:\t"<<*countPtr<<endl;                
            }
        }     
    }

    vecPtr=NULL;
    countPtr=NULL;

    delete [] vecPtr, countPtr;
}








    

