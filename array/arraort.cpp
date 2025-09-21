#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    //to check array is sorted or not
    bool sorted = true;
    for(int i=0;i<m;i++){
        if(arr[i]<arr[i-1]){
            sorted = false;
            break;

        }
    }
        if(sorted){
            cout<<"array is sorted.";
        }
        else{
            cout<<"array is not sorted";
        }
        
    
        
    

    return 0;

}