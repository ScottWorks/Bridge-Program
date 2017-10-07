/*
Author: Courtney E. Scott
Date: 10/02/2017

Task: 
A) Implement	a	function:	
int printMonthCalender(int numOfDays, int startingDay)		
This	function	is	given	two	parameters:		
• numOfDays	-	The	number	of	days	in	the	month		
•
startingDay	–	a	number	1-7	that	represents	the	day	in	the	week	of	the	first	day	
in	that	month	(1	for	Monday,	2	for	Tuesday,	3	for	Wednesday,	etc.).			
	
The	function	should:	
• Print	a	formatted	monthly	calendar	of	that	month	
• Return	a	number	1-7	that	represents	the	day	in	the	week	of	the	last	day	in	that	
month.	


B) A	method	for	determining	if	a	leapYear	is	a	leap	leapYear	in	the	Gregorian	calendar	system	is	to	
check	if	it	is	divisible	by	4	but	not	by	100,	unless	it	is	also	divisible	by	400.		
For	example,	1896,	1904,	and	2000	were	leap	years	but	1900	was	not.		
Write	a	function	that	takes	in	a	leapYear	as	input	and	return	true	if	the	leapYear	is	a	leap	leapYear,	
return	false	otherwise.	
Note:	background	on	leap	leapYear	https://en.wikipedia.org/wiki/Leap_year		


C) Implement	a	function:	
void printYearCalender(int leapYear, int startingDay)		
This	function	is	given	two	parameters:		
• leapYear	–	an	integer	that	represents	a	leapYear	(e.g.	2016)		
•
startingDay	–	a	number	1-7	that	represents	the	day	in	the	week	of	1/1	in	that	
leapYear	(1	for	Monday,	2	for	Tuesday,	3	for	Wednesday,	etc.).			
	
The	function	should	use	the	functions	from	sections	(a)	and	(b)	in	order	to	print	a	
formatted	yearly	calendar	of	that	leapYear.	


D) Write	program	that	interacts	with	the	user	and	your	function	in	(c).	
*/

#include <iostream>
#include <string>
using namespace std;


int printMonthCalender(int numofDays, int startingDay);
bool isLeapYear(int leapYear);
void printYearCalender(int year, int startingDay);


int main(){
    int year, startingDay;
    char ans;

    cout<<"Do you want to print a calender?!?!?!"<<endl;
    cout<<"Enter 'Y' for Yes or 'N' for No...\n\n"<<endl;

    cin>>ans;
    cout<<"\n";
    
    if(ans=='n' || ans=='N'){
        cout<<"Too bad, I'm going to print one anyway!\n\n"<<endl;
        cout<<"Please enter the year and day in the week of the first day of January";
        cout<<"(1-Monday, 2-Tuesday, 3-Wednesday, 4-Thursday, 5-Friday, 6-Saturday, 7-Sunday)."<<endl;
        
        cin>>year>>startingDay;
        cout<<"\n";
    }

    else if (ans=='y' || ans=='Y'){
        cout<<"Please enter the year and day in the week of the first day of January";
        cout<<"(1-Monday, 2-Tuesday, 3-Wednesday, 4-Thursday, 5-Friday, 6-Saturday, 7-Sunday)."<<endl;
       
        cin>>year>>startingDay;
        cout<<"\n";
    }

    printYearCalender(year, startingDay);
    return 0; 
}


int printMonthCalender(int numofDays, int startingDay){
    const int MAX_DAYS=8;
    int lastDay, currDay, dayOffset;    
    // counter variables
    int i, k, j;
    
    // create header
    cout<<"Mon"<<"\t"<<"Tue"<<"\t"<<"Wed"<<"\t"<<"Thr"<<"\t"<<"Fri"<<"\t"<<"Sat"<<"\t"<<"Sun"<<endl;

    // adds spacing for dayOffset
    for(i=1; i<startingDay; i++){
        cout<<"\t";        
    }

    // creates a new row at the end of each week
    currDay=1;
    dayOffset=MAX_DAYS-startingDay;    
    for(k=1; k<=6; k++){

        // count number of spaces starting from monday
        for(j=1; j<=dayOffset; j++, currDay++){

            if(currDay>numofDays){    
                break;
            }

            else{
                cout<<currDay<<"\t";       
            }            
        }

        if(currDay>numofDays){  
            lastDay=j;              
            break;
        }

        dayOffset=7;
        cout<<"\n";
    }   

    if(lastDay==0 || lastDay==8){
        lastDay=1;
    }

    return lastDay;
}


bool isLeapYear(int leapYear){
    
    // if divisible by 4 && not divisible by 100 is leap Year
    if(leapYear%4==0 && leapYear%100!=0){
        return true;
    }

    // if divisible by 4 && divisible by 100 && 400 is leap Year
    if(leapYear%4==0 && leapYear%100==0 && leapYear%400==0){
        return true;
    }

    return false;
}


void printYearCalender(int year, int startingDay){
    const int NUM_MONTHS=12; 
    int leapYear, numofDays, lastDay;
    // counter variables
    int i;
    
    leapYear=isLeapYear(year);

    // iterate through each month, print month and year 
    for(i=1; i<=NUM_MONTHS; i++){
        switch(i){
            case 1: cout<<"January"<<" "<<year<<endl;
                break;
            case 2: cout<<"Feburary"<<" "<<year<<endl;
                break;
            case 3: cout<<"March"<<" "<<year<<endl;
                break;               
            case 4: cout<<"April"<<" "<<year<<endl;
                break;
            case 5: cout<<"May"<<" "<<year<<endl;
                break;
            case 6: cout<<"June"<<" "<<year<<endl;
                break;                     
            case 7: cout<<"July"<<" "<<year<<endl;
                break;
            case 8: cout<<"August"<<" "<<year<<endl;
                break;
            case 9: cout<<"September"<<" "<<year<<endl;         
                break;               
            case 10: cout<<"October"<<" "<<year<<endl;           
                break;
            case 11: cout<<"November"<<" "<<year<<endl;
                break;
            case 12: cout<<"December"<<" "<<year<<endl;     
                break;  
        }

        // handles determines number of days in month, handles febuary as a special case
        if(i==2 && leapYear==true){
            numofDays=29;
        }

        else if(i==2 && leapYear==false){
            numofDays=28;
        }
        
        else if(i<=7 && i%2==1){
            numofDays=31;
        }
        
        else if(i>7 && i%2==0){
            numofDays=31;
        }

        else{
            numofDays=30;
        }
         
        lastDay=printMonthCalender(numofDays, startingDay);
        startingDay=lastDay;
        cout<<"\n"<<"\n"<<"\n";
    }
}
