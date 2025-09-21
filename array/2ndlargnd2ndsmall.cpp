#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[6]={89, 0, 56, 32, 100, 67};
    int seclargest =-1;
    int largest = arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>largest){
             seclargest = largest;
              largest = arr[i];    }
        else if(arr[i]>seclargest && arr[i]<largest){
            seclargest = arr[i];
        }
    }
    int smallest = arr[0];
     int secsmallest = INT_MAX;
     for(int i=0;i<5;i++){
        if(arr[i]<smallest){
            secsmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<secsmallest){
            secsmallest = arr[i];
        }
     }
     cout<<seclargest<<endl;
        cout<<secsmallest;

    return 0;
}