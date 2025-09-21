#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,sum=0;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;

    cout<<sum<<endl;}

    
    return 0;
}