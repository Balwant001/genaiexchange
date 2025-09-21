#include<iostream>
using namespace std;
int swap(int x,int y){
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"x is : "<<x<<endl;
    cout<<"y is :" <<y;
}
int main(){
    int x,y;
    cout<<"enter x and y: "<<endl;
    cin>>x>>y;
    swap(x,y);
    return 0;
}23