#include<iostream>
using namespace std;
int main(){
    int a,b,sum,sub,mult,div,x;
    cout<<"Enter the no. a nad b: "<<endl;
    cin>>a>>b>>x;
    switch(x){
        case 1:
             cout<<a+b<<endl;
              break;
        case2:
           cout<<a-b<<endl;
            break;
        case 3:
              cout<<a*b;
              break;
        case 4:
              cout<<a/b;
               break;
        case 5:
              cout<<'default';




    }

    return 0;
}