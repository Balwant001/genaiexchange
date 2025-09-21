#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter month no. between 1-12"<<endl;
    cin>>x;
    switch(x){
        case 1 ://jan
            cout<<"31";
             break;
        case 2 ://feb
             cout<<"28";
             break;
        case 3 ://march
              cout<<"31";
              break;
        case 4 ://april
             cout<<"30";
             break;
        case 5 ://may
             cout<<"31";
             break;
        case 6 ://jun
             cout<<"30";
             break;
        case 7 ://july
             cout<<"31";
             break;
        case 8://aug
             cout<<"31";
             break;
        case 9 ://sept
             cout<<"30";
             break;
        case 10 ://oct
             cout<<"31";
             break;
        case 11 ://nov
              cout<<"30";
               break;
        case 12 ://dec
               cout<<"31";
               

    }
    return 0;
}