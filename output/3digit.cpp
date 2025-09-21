#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter no. x:"<<endl;
    cin>>x;
    if(x>=100 && x<=999){
        cout<<"3 digit no.";
    }
       else{
        cout<<"not a 3 digit no.";
       }
    return 0;
}