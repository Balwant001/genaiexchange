#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n;
    int count =0;
    cout<<"Enter the elements of array : "<<endl;
    cout<<"Enter the elements of array to find greater than no. n: ";
    cin>>n;

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"the elements of arrays are: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<< " ";
 
    }
    
    return 0;
}
