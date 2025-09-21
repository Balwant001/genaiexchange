#include<iostream>
using namespace std;
int main(){
    int a,b,lcm,rem;
    cout<<"Enter the value of  a and b: "<<endl;
    cin>>a>>b;
    while(true){
        lcm = a;
        rem = a%b;
        if(rem ==0){
            break;
            a = a*2;
        }

    }
    cout<<"lcm is "<<lcm;
return 0;

}