#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. n: ";
    cin>>n;
    for(int i=n/2;i>=1;i--){
        if(n%i==0){
            cout<<"The HCF of "<<n<<" is "<<i<<endl;
            break;
        }
    }
    return 0;
}