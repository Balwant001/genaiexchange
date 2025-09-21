#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    for(i=1;i<=2*n-1;i=i+2){
        cout<<i<<endl;
    }
    return 0;
}