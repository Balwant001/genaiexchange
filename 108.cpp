#include<iostream>
using namespace std;
int main(){
    int n,sum,rem;
    sum= 0;
    cout<<"Enter the no. n:"<<endl;
    cin>>n;
    while(n!=0){
        rem= n%10;
        n=n/10;
        sum+=rem;
    }
    cout<<sum;
    return 0;
}