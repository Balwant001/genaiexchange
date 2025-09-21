#include<iostream>
using namespace std;
int main(){
    int arr[5]={12,45,21,34,2};
    int mx=arr[0];
    for(int i=1;i<=4;i++){
        if(arr[i]>mx)
        mx=arr[i];
    }
    cout<<mx;
return 0;}