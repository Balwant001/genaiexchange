#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter cp:"<<endl;
    cin>>cp;
    cout<<"enter sp:"<<endl;
    cin>>sp;
    if(sp>cp){
        cout<<"profit made :"<<(sp -cp);
            }
    if(cp>sp){
            cout<<"loss :"<<(cp -sp);}
    if(sp==cp){
        cout<<"no profit and no loss.";
    }      
        
        

    return 0;}