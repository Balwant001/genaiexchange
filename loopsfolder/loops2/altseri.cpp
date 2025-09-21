#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number n: "<<endl;
    cin>>n;
    if(n%2==0){
    
        cout<<-(n/2)<<" is the sum of series."<<endl;
    }
    else{
        cout<<(n+1)/2 <<"  is the sum of the series.";}
    
    return 0;
}