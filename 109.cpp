#include<iostream>
using namespace std;
int main(){
    int n,prod,rem;
    cin>>n;
    prod=1;
    while(n!=0){
        rem= n%10;
        n=n/10;
        prod*=rem;
    }
cout<<prod;
    return 0;
}