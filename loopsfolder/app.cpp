#include<iostream>
using namespace std;
int main(){
    int a=1,i,n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        cout<<a<<endl;
        a=a+2;
    }
    return 0;
}