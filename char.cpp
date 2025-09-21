#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character to check: "<<endl;
    cin>>ch;
    int ascii = (int)ch;
    if((ascii>=65 && ascii<=90) ||(ascii>=97 && ascii<=122))
        cout<<ch<<" is a character.";
    else {
        cout<<"not a character";
    }
    return 0;
}