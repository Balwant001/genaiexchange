#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the value of x, y, z: "<<endl;
    cin>>x>>y>>z;
    if(x>y && x>z)
        cout<<x<<"is greatest of all";
    if(y>x && y>z)
        cout<<y<<"is greatest of all";
    if(z>x && z>y)
        cout<<z<<"is greatest of all";
          else
        cout<<"All are equal";
    return 0;
}