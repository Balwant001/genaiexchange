#include<iostream>
using namespace std;
int main(){
    int n,rem,rev = 0;
    cout<<"Enter the no. n: "<<endl;
    cin>>n;
    int temp = n;
     while(n!=0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
     }
     cout<<rev<<endl;
     if(temp == rev){
        cout<<"palindrome"<<endl;
     }
     else{
        cout<<"not palindrome"<<endl;
     }

}