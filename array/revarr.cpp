#include<iostream>
using namespace std;
int main(){
    int arr[]={12,45,67,89,23,56,78,65};
    int n= sizeof(arr)/4;
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    int i=0;
    int j = n-1;
    while(i<j){
      int  temp =arr[i];
        arr[i]= arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<endl;
    for(int i=0;i<=n-1;i++)
        cout<<arr[i]<<" ";

    return 0;
}