#include<iostream>
using namespace std;
int main(){
    int x;
    int count = 0;
    cout<<"enter no. : "<<endl;
    cin>>x;
    while(x>0){
        x=x/10;
        count++;
        //x+=1;
        //count++;
        
    }
    cout<<count;

    
    return 0;
}