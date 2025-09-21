#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=500;i++){
        int temp=i;
        int sum=0;
        int rem;
        while(temp){
            rem=temp%10;
            sum+=(rem*rem*rem);
            temp/=10;
            
        }
        if(sum==i){
                cout<<i<<endl;
            }
    }
       

    return 0;

}