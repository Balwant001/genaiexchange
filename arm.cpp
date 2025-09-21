#include<iostream>
using namespace std;
int main(){
    int n,rem,sum=0;
    cout<<"Enter the no. n: "<<endl;
    cin>>n;
    int temp = n;
    while(n!=0){
        rem = n%10;
        sum = sum + rem*rem*rem;
        n = n/10;
    }
    if(temp == sum){
        cout<<temp<<" is a armstrong no."<<endl;
    }
    else{
        cout<<"not an armstrong no."<<endl;
    }

    
    return 0;
}