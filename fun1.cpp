#include<iostream>
using namespace std;
 int addition(int x, int y){
   int  result = x+y;
   return result;
 }
 int subtraction(int x, int y){
    int result = x-y;
    return result;
 }
 int multiplication(int x, int y){
   int result = x*y;
    return result;
 }
int main(){
    cout<<addition(23,67)<<endl;
    cout<<subtraction(45,90)<<endl;
    cout<<multiplication(45,67);
    return 0;

}