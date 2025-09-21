#include<iostream>
using namespace std;
int main(){
    int n,rev=0,rem=0,sum;
    cout<<"enter number n:"<<endl;
    cin>>n;
    int num=n;
    while(n>0){
       rev=rev*10;
        rem=n%10;
        rev+=rem;
        n/=10;
        
    }
    cout<<rev<<"  is the reverse of  "<<n<<endl;
    cout<<rev+num<<" is the sum of rev and given n."<<endl;

return 0;}