#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"enter x:"<<endl;
    cin>>x;
    int y = (int)x;
    float z = x-y;
    cout<<"fraction part is:"<<z;
    return 0;
}