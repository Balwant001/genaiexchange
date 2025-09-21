#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter x,y,z"<<endl;
    cin>>x>>y>>z;
    if(x>y && x>z){
        cout<<"x is greatest: "<<x;
    }
    if(y>x && y>z){
        cout<<"y is greatest: "<<y;
    }
    if(z>y &&z>x){
        cout<<"z is greatest: "<<z;
    }
    return 0;
}