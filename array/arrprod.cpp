#include<iostream>
using namespace std;
int main(){
    int arr[8]={12,4,5,6,7,898,23,3};
    int prod=1;
    for(int i=0;i<=7;i++){
        prod*=arr[i];
    }
    cout<<prod;
    return 0;
}
