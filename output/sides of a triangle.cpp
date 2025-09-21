#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter x, y, z:"<<endl;
    cin>>x>>y>>z;
    if(x+y>z && y+z>x && z+x>y){
        cout<<"can be the sides of the traingle";
    }
    else{
        cout<<"can not be sides of triangle";
    }
    
    return 0;
}