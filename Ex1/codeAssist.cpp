#include <iostream>
using namespace std;

int main() {
   int input, counter, currDig, odd, even, newCounter;
   
   cout<<"Please enter a positive integer"<<endl;
   cin>>input;
   
   
   for(counter=1; counter<=input; counter++){
    //    cout<<counter<<" counter 1 "<<endl;
       currDig=0;
       newCounter = counter;
       even = 0;
       odd = 0;
   
       while(newCounter > 0){
        //    cout<<"help im stuck"<<endl;
           currDig = newCounter % 10;
           newCounter = newCounter / 10;
           
           if(currDig % 2 == 0){
               even++;
            }
       
          else if(currDig % 2 == 1){
               odd++;
            }
            // cout<<counter<<" counter 2 "<<endl;
       }
    //    cout<<counter<<" counter 3 "<<endl;
              
       if(even > odd){
           cout<<counter<<endl;
        }
   }

   return 0;
}