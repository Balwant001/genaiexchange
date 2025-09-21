#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr[3]=78;
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}