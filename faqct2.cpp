#include<iostream>
using namespace std;
int main(){
    int n,fact;
    fact=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int i=1;i<=n;i++)
        fact=fact*i;
    cout<<fact<<endl;}
    return 0;
}