/*
Author: Courtney E. Scott
Date: 09/24/2017

Task: Implement	a	number	guessing	game.	The	program	should	randomly	choose	an	integer	
between	1	and	100	(inclusive),	and	have	the	user	try	to	guess	that	number.		
	
Implementations	guidelines:	
1. The	user	can	guess	at	most	5	times.	
2. Before	each	guess	the	program	announces:	
• An	updated	guessing-range,	taking	in	to	account	previous	guesses	and	responses.	
• The	number	of	guesses	that	the	user	has	left.	
3. If	the	user	guessed	correctly,	the	program	should	announce	that,	and	also	tell	how	many	
guesses	the	user	used.	
4. If	the	user	guessed	wrong,	and	there	are	still	guesses	left,	the	program	should	tell	the	
user	if	the	number	(it	chose)	is	bigger	or	smaller	than	the	number	that	the	user	guessed.	
5. If	the	user	didn’t	guess	the	number	in	all	of	the	5	tries,	the	program	should	reveal	the	
number	it	chose.	
6. Follow	the	execution	examples	below	for	the	exact	format.	
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main(){
    int randNum, randMax, randMin, userGuess, numGuess;

    // generate random #
    srand(time(0));
    randMin=1;
    randMax=100;
    randNum=(rand()%randMax)+randMin;

    cout<<"I thought of a number between 1 and 100! Try to guess it."<<endl;
    // user has 5 attempts to guess randNum
    numGuess=5;
    while(numGuess>0){

    cout<<"Range: ["<<randMin<<", "<<randMax<<"], Number of guesses left: "<<numGuess<<endl;
    cout<<"Your guess: ";
    cin>>userGuess;

        // if user guess correctly, exit program
        if(userGuess==randNum){
            cout<<"Congrats! You guessed my number in "<<userGuess<<" guesses"<<endl;
            return 0; 
        }

        // if user guesses wrong, print # of guesses left
        else if(userGuess!=randNum){

            if(userGuess<randNum && userGuess>randMin){
                randMin=userGuess+1;
                cout<<"Wrong! My number is bigger."<<endl;
            }

            else if(userGuess>randNum && userGuess<randMax){
                randMax=userGuess-1;
                cout<<"Wrong! My number is smaller."<<endl;              
            }

            else if(userGuess<randNum && userGuess<randMin){
                cout<<"Wrong! My number is bigger."<<endl;              
            }

            else if(userGuess>randNum && userGuess>randMin){
                cout<<"Wrong! My number is smaller."<<endl;
            }   
        }

        // decrement numGuess
        numGuess--;
    }

    // after 5 attempts, randNum is revealed
    cout<<"Out of guesses! My number is "<<randNum<<endl;
    return 0; 
}