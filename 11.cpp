#include<iostream>
using namespace std;
int main(){
    int n,rev,sum,temp,rem;
    sum=0;
    rev=0;
    cin>>n;
    temp = n;
    while(temp!=0){
        rem=temp%10;
        rev=rev*10;
        rev=rev+rem;
        temp/=10;
    }
    sum=rev+n;
    cout<<rev;
    cout<<sum;
   return 0;
}