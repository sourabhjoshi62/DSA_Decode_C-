#include<iostream>
using namespace std;
class student{
    public:
    int rno[20];
    float gpa[20];
    string name[20];
};
int main(){
    student s;
    s.rno[0]=1;
    cout<<s.rno[0];

}