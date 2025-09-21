#include<iostream>
using namespace std;
int main(){
    int arr[5]={0, 98, 67, 100, 45};
    int seclargest = -1;
    int largest = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    for(int i=0;i<5;i++){
        if(arr[i]>seclargest && arr[i]<largest){
            seclargest = arr[i];
        }
    }
    cout<<largest<<endl;
    cout<<seclargest;

    return 0;

}