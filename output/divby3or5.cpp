#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter x:"<<endl;
    cin>>x;
    if(x%3==0 || x%5==0){
    cout<<"the no. is divisible by 3 or 5 both.";
    }
    else{
        cout<<"divisible by none";
    }
    return 0;}