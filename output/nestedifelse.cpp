#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter no."<<endl;
    cin>>x;
    if(x%3==0 || x%5==0){
        if(x%15 != 0){
            cout<<"the no. is divisible by 3 or 5 but not with 15.";
        }
        else{
            cout<<"condition not matching";
        }
    }else{
        cout<<"condition not matching";
    }
    return 0;
}