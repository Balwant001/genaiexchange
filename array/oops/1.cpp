#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int roll;
    float gpa;

};
int main(){
    Student s1;
    s1.name="ballu";
    s1.age=23;
    s1.roll=121;
    s1.gpa=8.5;

    Student s2;
    s2.name="shantnu";
    s2.age=22;
    s2.roll=113;
    s2.gpa=9.3;
    cout<<s1.name<<" "<<s1.age<<" "<<s1.roll<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.age<<" "<<s2.roll<<" "<<s2.gpa<<endl;
    return 0;
}
