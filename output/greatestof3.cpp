#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter x, y, z"<<endl;
    cin>>x>>y>>z;
    if(x>y){
        if(x>z){
            cout<<"x is greatest. "<<x;
        }
        else{
            cout<<"z is greatest "<<z;
        }
    }
    else{
        if(y>z){
            cout<<"y is greatest "<<y;
        }
        else{
            cout<<"z is greatest <<z";
        }
    }
    
    return 0;
}