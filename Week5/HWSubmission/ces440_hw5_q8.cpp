/* 
Author: Courtney E. Scott
Date: 10/12/2017

Task:
Two	strings	are	anagrams	if	the	letters	can	be	rearranged	to	form	each	other.	For	example, “Eleven	plus	two”	is	an	anagram	of	“Twelve	plus	one”.	Each	string	contains	one	‘v’,	three	‘e’s,
two	‘l’s,	etc. Write	a	program	that	determines	if	two	strings	are	anagrams.	The	program	should	not	be	case sensitive	and	should disregard	any	punctuation	or	spaces.		
*/


#include <iostream>
#include <string>

using namespace std; 


void swapVal(char& elem1, char& elem2);
string removeCharacters(const string& str, const string& bannedChars);    
string lowerCase(const string& str);    
string formatString(const string& str);    
string sortString(const string& str);
bool compareStrings(string str1, string str2);
    

int main(){
    string inputStr1, inputStr2;
    bool ans;

    // read string in using getline(cin, str);
    getline(cin, inputStr1);
    getline(cin, inputStr2);
    ans=compareStrings(inputStr1, inputStr2);

    switch(ans){
        case 0: cout<<"'"<<inputStr1<<"' and '"<<inputStr2<<"' are not anagrams!\n"<<endl;
        break;

        case 1: cout<<"'"<<inputStr1<<"' and '"<<inputStr2<<"' are anagrams!\n"<<endl;
        break;
    }

    return 0; 
}


// swaps values
void swapVal(char& elem1, char& elem2){
    char temp=elem2;

    elem2 = elem1;
    elem1 = temp; 
}


// remove spaces and punctuations
string removeCharacters(const string& str, const string& bannedChars){
    int index, stringIndex;
    string charsRemoved, strStrip;

    for(index=0; index<str.length(); index++){

        strStrip=str.substr(index,1); // strips single str element
        stringIndex=bannedChars.find(strStrip,0); // compare string element against string of banned characters
    
    if(stringIndex<0 || stringIndex>=bannedChars.length()){
        charsRemoved+=strStrip; // if string element is not in string of banned characters add to charsRemoved string.        
    }
    }

    return charsRemoved;
}


string lowerCase(const string& str){
    int index;
    string temp(str);    

    for(index=0; index<str.length(); index++){
        temp[index]=tolower(str[index]);
    }

    return temp;
}


string formatString(const string& str){
    string bannedCharacters("?!@#%$^&*()_+-=`~{}|[];',./\\<>:\" ");
    string formattedStr(str);
    formattedStr=lowerCase(formattedStr);
    string formatted=removeCharacters(formattedStr, bannedCharacters);

    return formatted;
}


// sort strings from lowest to highest value
string sortString(const string& str){
    int index;
    string storedStr(str);
    
    // call function that formats string
    storedStr=formatString(storedStr); 
    cout<<storedStr<<endl;

    // for loop iterates through each element
    for(index=0; index<storedStr.length()-1;){
        
        // if current index value is greater than next index value then swap
        if(storedStr[index]>storedStr[index+1]){
            swap(storedStr[index], storedStr[index+1]);

            //reset index
            index=0;
        }

        else{
            index++;
        }
    }
    cout<<storedStr<<endl;        
    
    return storedStr;
}


// compare strings upon each iteration of for loop
bool compareStrings(string str1, string str2){
    int index;
    string compareString1, compareString2;
    
    compareString1=sortString(str1);
    compareString2=sortString(str2);
    
    for(index=0; index<compareString1.length(); index++){
  
        if(compareString1[index]!=compareString2[index]){

            return false;
        }
    }    

    return true;
}