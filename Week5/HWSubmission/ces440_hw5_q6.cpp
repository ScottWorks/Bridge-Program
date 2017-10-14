/* 
Author: Courtney E. Scott
Date: 10/09/2017

Task:
Write	a	program	that	reads	in	a	line	of	text	and	outputs	the	line	with	all	the	digits	in	all	integer numbers	replaced with	'x'.	
*/

#include <iostream>
#include <string>
using namespace std; 

int main(){

    string input="cant knock 777 hustle"

    




    return 0; 
}




// 































































































// int countWords(const string& inputStr);
// int breakString(string wordArr[], int arrPhysicalSize, string inputStr);
// void convertNumstoX(const string& inputStr);
    
// void stringSearch(string str);
    
    
// int main(){
//     string inputStr=("in 1996 nobody smoked"), numStr=("1234567890");

//     int i, k;

    // cout<<"Please enter a line of text:\n"<<endl;
    // getline(cin, inputStr);

    // for(i=0; i<=inputStr.length(); i++){
        
    //     for(k=0; k<=numStr.length(); k++){
    //         if(inputStr[i]==numStr[k]){
    //             inputStr.insert(i,"x");
    //             inputStr.erase(i+1,1);
    //             cout<<inputStr[i]<<" ";
    //         }
    //     }
    // }
    
    // stringSearch(inputStr);
    // cout<<modifiedStr<<endl;
//     return 0; 
// }





// void stringSearch(string str){
//     bool endSentence;
//     int startPosition, spaceFound, index, stringIndex;
//     string bannedChars("1234567890"), strStrip;
    
//     endSentence=false;
//     startPosition=0;
//     while(endSentence==false){
//         spaceFound=str.find(" ", startPosition);
//         // cout<<spaceFound<<" ";
        
//         if(spaceFound==string::npos){
//             endSentence=true;
//         }

//         else if()

        
//         // else if(spaceFound>=1){

//         //     for(index=0; index<str.length(); index++){
//         //         strStrip=str.substr(index,1); // strips single str element
//         //         stringIndex=bannedChars.find(strStrip,0); // compare string element against string of banned characters

//         //         if(stringIndex>0 || stringIndex<=bannedChars.length()){
//         //             str.insert(index,"x");
//         //             str.erase(index+1,1);
//         //             // cout<<str[index]<<" ";
//         //         }       
//         //     }
//         // }

//         else{
//             startPosition=spaceFound+1;
//         }
//     }
//     // return numStr;
// }









        
        // else if(spaceFound>=1){

        //     for(index=0; index<str.length(); index++){
        //         strStrip=str.substr(index,1); // strips single str element
        //         stringIndex=bannedChars.find(strStrip,0); // compare string element against string of banned characters

        //         if(stringIndex>0 || stringIndex<=bannedChars.length()){
        //             str.insert(index,"x");
        //             str.erase(index+1,1);
        //             // cout<<str[index]<<" ";
        //         }       
        //     }
        // }
            


    














// // search through string, if a " " is found previous word contains all numbers, slice word, replace with x's, continue searching until str==npos. (see Display 7.10 for reference)



// // determines physical size of wordArr
// int countWords(const string& inputStr){
//     bool endSentence;
//     int endPosition, startPosition, wordCount; 

//     endSentence=false;
//     startPosition=0;
//     wordCount=0;
//     while(endSentence==false){
//         endPosition=inputStr.find(" ", startPosition);
        
//         if(endPosition==string::npos){
//             endSentence=true;
//             wordCount++;            
//         }

//         else{
//             startPosition=endPosition+1;
//             wordCount++;
//         }
//     }

//     return wordCount;
// }


// // break string into array elements 
// int breakString(string wordArr[], int arrPhysicalSize, string inputStr){
//     bool endSentence;
//     string storeWord;
//     int endPosition, startPosition, index; 

//     endSentence=false; 
//     startPosition=0;
//     index=0;
//     while(endSentence==false){
//         endPosition=inputStr.find(" ",startPosition);
     
//         if(endPosition==string::npos){
//             endSentence=true;
//             storeWord=inputStr.substr(startPosition);
//             wordArr[index]=storeWord;
//             // cout<<wordArr[index]<<" ";
//             index++;
//         }
        
//         else{
//             storeWord=inputStr.substr(startPosition, endPosition-startPosition);
//             startPosition=endPosition+1;            
//             wordArr[index]=storeWord;
//             // cout<<wordArr[index]<<" ";            
//             index++;
//         }
//     }

//     return index;    
// }


// // takes array input and converts nums to x's 
// void convertNumstoX(const string& inputStr){
//     int arraySize, strLength, updateCount, i;
//     string currStr;

//     int index, stringIndex;
//     string charsRemoved, strStrip;


//     arraySize=countWords(inputStr);

//     string wordArr[arraySize];

//     updateCount=breakString(wordArr, arraySize, inputStr);
//     // cout<<updateCount<<endl;
       
//     string bannedChars("1234567890");
    
//     for(index=0; index<updateCount; index++){
//         cout<<wordArr[i]<<endl;

//         strStrip=wordArr.substr(index,1); // strips single str element
//         stringIndex=bannedChars.find(strStrip,0); // compare string element against string of banned characters

//         cout<<stringIndex<<" ";
//     }
// }










// // break string into array elements 
// int breakString(string wordArr[], int arrPhysicalSize, const string& inputStr){
//     bool endSentence;
//     string storeWord;
//     int endPosition, startPosition, index; 

//     endSentence=false; 
//     startPosition=0;
//     index=0;
//     while(index<arrPhysicalSize){
//         endPosition=inputStr.find(" ",startPosition);

//         if(endPosition==string::npos){
//             storeWord=inputStr.substr(startPosition);
//             wordArr[index]=storeWord;
//             // cout<<wordArr[index]<<" ";
//             index++;
//         }

//         else{
//             storeWord=inputStr.substr(startPosition, endPosition-startPosition);
//             startPosition=endPosition+1;            
//             wordArr[index]=storeWord;
//             // cout<<wordArr[index]<<" ";            
//             index++;
//         }
     
//         // if(endPosition==string::npos){
//         //     endSentence=true;
//         //     storeWord=inputStr.substr(startPosition);
//         //     wordArr[index]=storeWord;
//         //     cout<<wordArr[index]<<" ";
//         //     index++;
//         // }
        
//         // else{
//         //     storeWord=inputStr.substr(startPosition, endPosition-startPosition);
//         //     startPosition=endPosition+1;            
//         //     wordArr[index]=storeWord;
//         //     cout<<wordArr[index]<<" ";            
//         //     index++;
            
//         // }
//     }

//     return index;    
// }