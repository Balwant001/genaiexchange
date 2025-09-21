#include<iostream>
using namespace std;
void sum(int a, int b){
    cout<<a+b;
}
int main(){
    int a,b;
    cout<<"Enter a and b; "<<endl;
    cin>>a>>b;
    sum(a,b);
    return 0;
}