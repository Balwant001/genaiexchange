#include<iostream>
using namespace std;
int main(){
    int n, rev=0, rem =0;
    cout<<"enter number n:"<<endl;
    cin>>n;
    while(n>0){
        rev=rev*10;
        rem=n%10;
        rev+=rem;
        n/=10;

    } 
    cout<<rev;

    return 0;
}