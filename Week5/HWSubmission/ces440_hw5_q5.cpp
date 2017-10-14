/* 
Author: Courtney E. Scott
Date: 10/09/2017

Task:
Write	a	program	that	reads	a	person’s	name	in	the	following	format:
first	name,	then	middle	name	or	initial,	and	then	last	name. The	program	then	outputs	the	name	in	the	following	format: Last_Name,			First_Name			Middle_Initial.		
*/

#include <iostream>
#include <string>
using namespace std; 


int main(){
    string firstName, middleName, lastName;
    char middleInitial;

    cout<<"Please enter your first, middle, and last name:"<<endl;
    cin>>firstName>>middleName>>lastName;
    middleInitial=middleName[0];
    cout<<lastName<<", "<<firstName<<" "<<middleInitial<<"."<<endl;

    return 0; 
}