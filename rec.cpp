#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==3 || j==3)
                cout<<"*";
            else
                cout<<" ";

            
        }
        cout<<endl;
    }
}