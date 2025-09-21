#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character:"<<endl;
    cin>>ch;
    int y = (int)ch;
    if(y>=97 && y<=123){
        cout<<"is an alphabet: "<<ch;
    }
    if(y>=65 && y<=90){
        cout<<"an alphabet: "<<ch;
    }
    if(y>=0 &&y<=48){
        cout<<"not an alphabet: "<<ch;
    }
    return 0;
}