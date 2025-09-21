#include<iostream>
using namespace std;
int main(){
    int arr[4][2]={{23 ,45},{20,47},{21,36},{22,47}};
    for(int i=0;i<=3;i++){
        for(int j=0;j<=1;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
        
    }

    
    
    return 0;
}