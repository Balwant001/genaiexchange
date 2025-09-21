#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,2,3,2,1};
    int n= sizeof(arr)/4;
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=arr[n-1-i])
            cout<<"not a palindrome."<<endl;
        else
    

    }
    cout<<"palindrome. "<<endl;
    return 0;
}