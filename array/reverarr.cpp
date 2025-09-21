#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    display(v1);
    int n= v1.size();
    vector<int>v2(n);
    for(int i=0;i<n;i++){
        v2[i]=v1[n-1-i];
    }
    display(v2);
}