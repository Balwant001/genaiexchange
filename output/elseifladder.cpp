#include<iostream>
using namespace std;
int main(){
   int marks;
   cout<<"enter marks: "<<endl;
   cin>>marks;
   if(marks>=91){
    cout<<"excellent";
   }
      else{
         if(marks>=81){
            cout<<"very good";
         }
         else{
            if(marks>=71){
                cout<<"good";
            
            }
            else{
                if(marks>=61){
                    cout<<"average";
                }
                else{
                    if(marks>=51){
                        cout<<"needs improvement";
                    }
                    else{
                        if(marks>=41){
                        cout<<"below average";
                    }
                         else{
                             cout<<"fail";
                    }
                }
                
            }
         }
   }
   
return 0;}  
}