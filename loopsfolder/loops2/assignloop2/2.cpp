#include<iostream>
using namespace std;
int main(){
int n, rem =0, sum=0;
cout<<"enter number n:"<<endl;
cin>>n;
while(n>0){
    rem = n%10;
    n=n/10;
    if(rem%2==0){
        sum+=rem;

    }
    
}cout<<sum;

    return 0;
}

