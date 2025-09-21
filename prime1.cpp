#include<iostream>
using namespace std;
int main(){
    int n,flag=0;
    cout<<"Enterthe value of n: "<<endl;
    cin>>n;
   int m=n/2;
    for(int i=2;i<=m;i++){
        if(n%i==0){
            cout<<n<<" is not a prime number"<<endl;
            flag=1;
            break;
        }
        
    }
    if(flag==0){
        cout<<n<<" is a prime number"<<endl;
    }
    return 0;
}