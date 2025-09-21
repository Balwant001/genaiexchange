#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the side of square n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int i=1;i<=n;i++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}