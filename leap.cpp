#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year to check:  "<<endl;
    cin>>year;
    if(year%400==0 && year%100==0 && year%4==0 ){
        cout<<"leap year"<<year;
    }
    else if(year%400!=0 && year%100 ==0 && year%4!=0){
        cout<<"not a leap year";
    }
    else if(year%400 !=0 && year %100 != 0 && year %4 ==0){
        cout<<"leap year"<<year;
    }
    else {
        cout<<"not a leap";
    }

    return 0;

}
