#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    for(int j=0;j<m;j++){
        for(int i=j+1;i<m;i++){
            int temp = arr[j][i];
            arr[j][i]= arr[i][j];
            arr[i][j]=temp;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}