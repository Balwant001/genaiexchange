#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[5]={1,2,100,4,5};
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<5;i++){
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<max<<endl;
   cout<<min;
    return 0;

}