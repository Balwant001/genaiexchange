#include<iostream>
using namespace std;
int main(){
    int n,rem,rev;
    rev=0;
    cin>>n;
    while(n!=0){
        rem=n%10;
        rev*=10;
        rev+=rem;
        n=n/10;
    

    }
    cout<<rev;
    return 0;
}