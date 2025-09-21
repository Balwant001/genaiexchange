#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if((x%3==0 || x%5==0) && (x%15!=0))
      cout<<x<<"is divisible by 3 or 5 but not by 15.";
    else
    cout<<x<<"is not divisible by 3 or 5 but not by 15.";
    return 0;
}