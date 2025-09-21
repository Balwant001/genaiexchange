#include<iostream>
using namespace std;
int main(){
    int arr1[3][3]={{1,2,3},{3,4,5},{5,6,7}};
    int arr2[3][3]={{1,2,3},{3,4,5},{5,6,7}};
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            cout<<arr1[i][j]+arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}