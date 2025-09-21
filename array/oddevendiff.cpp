#include<iostream>
using namespace std;
int main(){
    int sumeven=0;
    int sumodd =0;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<=9;i++){
        if(i%2==0)
            sumeven+=arr[i];
    }
    cout<<sumeven<<endl;
    for(int i=0;i<=9;i++){
        if(i%2!=0)
        sumodd+=arr[i];
        
    }
    cout<<sumodd<<endl;

    cout<<sumeven-sumodd;
    return 0;
}