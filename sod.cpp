#include<iostream>
using namespace std;
int main(){
    int sum = 0,n,rem;
    cout<<"Entrer the num n: "<<endl;
    cin>>n;
    while(n!=0){
        rem = n%10;
         sum = sum + rem;
         n = n/10;
    
    }
    cout<<sum;
    return 0;

}