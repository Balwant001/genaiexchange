#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the no. x: ";
    cin>>x;
    if(x%5==0){
        cout<<x<<"  is divisible by 5.";
    }
    else{
         cout<<x<<"  is not divisible by 5.";
    }
    return 0;
}