#include<iostream>
using namespace std;
void swap(int x, int y){
    int temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y<<endl;
}
int main(){
    int x=12;
    int y=15;
    swap(x,y);
    return 0;
}