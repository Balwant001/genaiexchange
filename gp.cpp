#include<iostream>
using namespace std;
int main(){
    int n, i,a;
    cout<<"enter the number up to which gp to be present n: "<<endl;
    cin>>n;
    a= 1;
    for(i =1;i<=n;i++){
        cout<<a<<endl;
        a = a*2;

    }
    return 0;
}
