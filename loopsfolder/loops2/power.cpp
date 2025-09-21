#include<iostream>
using namespace std;
int main(){
    int a,b;
    float pow=1;
    cout<<"enter a and b: "<<endl;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        bool flag = true;
        if(b<0){
            flag = false;
            b= -b;
        }
        pow=1/(a*pow);

    }
    cout<<pow;
    return 0;
}