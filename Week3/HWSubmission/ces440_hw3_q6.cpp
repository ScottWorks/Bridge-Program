#include <iostream>
using namespace std;

int main() {
   int input, counter, currDig, odd, even, newCounter;
   
   cout<<"Please enter a positive integer"<<endl;
   cin>>input;
   
   for(counter=1; counter<=input; counter++){
       currDig=0;
       even = 0;
       odd = 0;
       newCounter = counter;
       
       while(newCounter > 0){
           currDig = newCounter % 10;
           newCounter = newCounter / 10;
           
           if(currDig % 2 == 0){
               even++;
            }
       
          else if(currDig % 2 == 1){
               odd++;
            }
       }

       if(even > odd){
           cout<<counter<<endl;
        }
   }

   return 0;
}