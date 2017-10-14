/* 
Author: Courtney E. Scott
Date: 10/08/2017

Task:
Traditional	password	entry	schemes	are	susceptible	to	"shoulder	surfing"	in	which	an	attacker watches	an	unsuspecting	user	enter	their	password	or	PIN	number	and	uses	it	later	to	gain access	to	the	account.	One	way	to	combat	this	problem	is	with	a	randomized	challenge-response	system.	In	these	systems	the	user	enters	different	information	every	time,	based	on	a secret	in	response	to	a	randomly	generated	challenge. Consider	the	following	scheme,	in	which	the	password	consists	of	a	five-digit	PIN	number	(00000 to 99999).	Each	digit	is	assigned	a	random	number	that	is	1,	2,	or	3.	The	user	enters	the	random numbers	that	correspond	to	their	PIN	instead	of	their	actual	PIN	numbers.		
	
For	example,	consider	an	actual	PIN	number	of	12345.	To	authenticate	the	user	would	be presented	with	a	screen	such	as:		
PIN: 0 1 2 3 4 5 6 7 8 9
NUM: 3 2 3 1 1 3 2 2 1 3
The	user	would	enter	23113	instead	of	12345.	This	doesn’t	divulge	the	password	even	if	an attacker	intercepts	the	entry	because	23113	could	correspond	to	other	PIN	numbers,	such	as 69440	or	70439. The	next	time	the	user	logs	in,	a	different	sequence	of	random	numbers	would	be	generated,	
such	as:		
PIN: 0 1 2 3 4 5 6 7 8 9
NUM: 1 1 2 3 1 2 2 3 3 3
	
Write	a	program	to	simulate	the	authentication	process.	Store	an	actual	5-digit	PIN	number	in your	program	(make	one	up,	and	store	it	as	a	constant).	The	program	should	use	an	array	to	
assign	random	numbers	to	the	digits	from	0	to	9.	Output	the	random	digits	to	the	screen,	input the	response	from	the	user,	and	output	whether	or	not	the	user’s	response	correctly	matches	
the	PIN	number.
*/


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;


// takes seed, generates series of randomly mapped 1s, 2s, 3s corresponding to stored password
void randKeyGenerator(int arr[], int arrSize);
int randomizer(int seed);    
void printArrays(int keyArr[], int genericPin[], int genPinArrSize);    
void checker(int storedPin[], int genericPin[], int genPinArrSize, int pinArrSize);
    

int main(){
    const int GEN_PIN_SIZE=10;
    const int PIN_SIZE=5;
    int genericPinArr[GEN_PIN_SIZE]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int pinArr[5]={1, 2, 3, 4, 5}; // stored user password

    cout<<"Please enter your PIN according to the following mapping:"<<endl;
    checker(pinArr, genericPinArr, GEN_PIN_SIZE, PIN_SIZE);

    return 0;
}


void randKeyGenerator(int keyArr[], int genPinArrSize){
    int randVal;
    int i; 

    for(i=0; i<genPinArrSize; i++){
        randVal=randomizer(i*time(0));        
        keyArr[i]=randVal;
    }
}


// randomizes input
int randomizer(int seed){

    srand(seed);

    return (rand()%3)+1;
}


void printArrays(int keyArr[], int genericPin[], int genPinArrSize){
    int i;

    // print genericPin array
    cout<<"PIN: ";
    for(i=0; i<genPinArrSize; i++){
        cout<<genericPin[i]<<" ";
    }
        cout<<endl;

    // print key array
    cout<<"NUM: ";
    for(i=0; i<genPinArrSize; i++){
        cout<<keyArr[i]<<" ";
    }
        cout<<endl;
}


// takes user input and compares it to keyArr output
void checker(int storedPin[], int genericPin[], int genPinArrSize, int pinArrSize){
    int keyArr[genPinArrSize], mappedPin[pinArrSize];
    int input, mappedPinCode;
    int i, j, k;

    randKeyGenerator(keyArr, genPinArrSize);
    printArrays(keyArr, genericPin, genPinArrSize);

    // create mapping between keyArr and genericPin
    for(i=0, j=0, k=pinArrSize-1, mappedPinCode=0; j<pinArrSize; i++){
        
        if(storedPin[j]==genericPin[i]){
            mappedPin[j]=keyArr[i];
            
            mappedPinCode+=(mappedPin[j])*pow(10,k);
            
            j++;
            k--;
            i=0;
        }
    }

    cin>>input;

    if(input!=mappedPinCode){
        cout<<"Your PIN is not correct!"<<endl;
    }

    else{
        cout<<"Your PIN is correct."<<endl;
    }
}

