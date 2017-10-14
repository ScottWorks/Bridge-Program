/*
Author: Courtney E. Scott
Date: 10/08/2017

Task:
a. Implement	a	function:	
bool isPalindrome(string str) This	function	is	given	a	string	str	containing	a	word,	and	returns	true	if	and	only	if	str	is a	palindrome.	
	
b. Write	a	program	that	reads	a	word	from	the	user	and	announces	to	the	user	if	it	is	a palindrome	or	not.	
*/

#include <iostream>
#include <string>
using namespace std; 


bool isPalindrome(string str);


int main(){
    string str;
    bool ans; 

    cout<<"Please enter a word: ";
    cin>>str; 

    isPalindrome(str);

    return 0;
}


bool isPalindrome(string str){
    string newStr;
    // counter variable
    int i;

    for(i=str.length()-1; i>=0; i--){
        newStr+=str[i];
    }

    if(newStr==str){
       cout<<str<<" is a palindrome."<<endl;
    }

    else{
        cout<<str<<" is not a palindrome."<<endl;
    }
}