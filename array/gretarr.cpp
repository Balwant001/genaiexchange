#include<iostream>
using namespace std;
int main(){
    int x=5;
    int arr[6]={23,1,4,2,56,3};
    for(int i=0;i<=5;i++){
        if(arr[i]>x)
        cout<<arr[i]<<" ";
    }
    return 0;
}