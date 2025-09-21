#include<iostream>
using namespace std;
int main(){
    int a,b,lcm,rem, hcf;
    cout<<"enter the value nof a and b: "<<endl;
    cin>>a>>b;
    while(true){
        lcm = a;
        rem = a%b;
        if(rem ==0){
            break;
            a = a*2;
        }
    }
    cout<<"lcm is "<<lcm<<endl;
    hcf = (a*b)/lcm;
    cout<<"hcf is "<<hcf;
    return 0;
}