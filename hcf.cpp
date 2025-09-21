#include<iostream>
using namespace std;
int main(){
    int a,b,rem,hcf;
    cout<<"the value of a nad b: "<<endl;
    cin>>a>>b;
    while(true){
        hcf =b;
        rem = a%b;
        a=b;
        b=rem;
        if(b==0){
            break;
        }
    }
    cout<<hcf<<" is the hcf ";

    return 0;
}