#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is greatesst of them";
        }
        else{
            cout<<c<<" is greatest of them";
        }
    }
    else{
        if(b>c){
            cout<<b<<"is greatest of them";
        }
    }
    return 0;
}