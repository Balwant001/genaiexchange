#include<iostream>
using namespace std;
int main(){
    int n, rem;
    int sum = 0;
    cout<<"enter number n:"<<endl;
    cin>>n;
    while(n>0){
        rem = n%10;
        sum= sum + rem;
        n/=10;
    }
    cout<<sum;
    return 0;
}