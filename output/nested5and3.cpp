#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the no. : "<<endl;
    cin>>x;
    if(x%3==0){
        if(x%5==0){
            cout<<"divisible by 5 and 3";
        }
        else{
            cout<<"condition not matched";
        }
    }
    else{
        cout<<"condition not matched";
    }
    
    return 0;
}
