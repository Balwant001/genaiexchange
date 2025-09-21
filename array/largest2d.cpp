#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cin>> m;
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int mx=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>mx)
            mx=arr[i][j];
        }
    }   
    cout<<mx;
    return 0;
}