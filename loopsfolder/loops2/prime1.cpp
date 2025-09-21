#include<iostream>
using namespace std;
int main(){
    int n,i, flag=0;
    cout<<"enter the number:"<<endl;
    cin>>n;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<n<<" is composite number.";
            flag=1;
            break;
        }
        
    }
    if(flag==0){
        cout<<n<<" is a prime no.";
    }
    



    return 0;
}