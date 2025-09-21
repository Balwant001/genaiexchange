#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the value of x:"<<endl;
    cin>>x;
    if(x%5==0){
         cout<<"the no. is divisible by 5"<<endl;
    }
    else{
        cout<<"not divisible by 5";
    }
    return 0;
}