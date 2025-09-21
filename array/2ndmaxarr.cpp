#include<iostream>
#include<climits>
using namespace std;
int main(){
    int mx=INT_MIN;
    int arr[]={23,45,67,89,12,32,45,22};
    int n= sizeof(arr)/4;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    int smx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=mx)
        smx=max(smx,arr[i]);
    }
    cout<<smx;


    return 0;
}
