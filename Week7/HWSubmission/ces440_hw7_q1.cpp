/*
Author: Courtney Scott
Date: 10/22/2017
 */


#include <iostream> 
using namespace std; 


void printTriangle(int n);
void printOppositeTriangles(int n);
void printRuler(int n);
    

int main(){
    int input;

    cin>>input;
    cout<<"\n\n";
    
    printTriangle(input);
    cout<<"\n\n";

    printOppositeTriangles(input);
    cout<<"\n\n";
    
    printRuler(4);
    cout<<"\n\n";
    
    return 0; 
}


void printTriangle(int n){
    int i=1; 

    if(i==n){
        cout<<"*"<<endl;
    }

    else{
        printTriangle(n-1);            
        for(int j=0; j<n; j++){
            cout<<"*";      
        }
        cout<<endl;            
    }
    i++;
}


void printOppositeTriangles(int n){
    int i=1; 
    
        if(i==n){
            cout<<"*"<<endl;
            cout<<"*"<<endl;
        }
    
        else{
            for(int j=0; j<n; j++){
                cout<<"*";      
            }
            cout<<endl;  

            printOppositeTriangles(n-1);

            for(int j=0; j<n; j++){
                cout<<"*";      
            }
            cout<<endl;     
        }
        i++;
    }


void printRuler(int n){

    if(n==1){
        cout<<"-"<<endl;
        return;
    }

    else{

        printRuler(n-1);
        for(int i=0; i<n; i++){
            cout<<"-";
        }
        cout<<endl;
        printRuler(n-1);
    }
}
