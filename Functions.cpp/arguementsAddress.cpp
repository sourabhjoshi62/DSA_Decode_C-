#include<iostream>
using namespace std;
//below are formal parameters
void abc(int x,int y)
{
    cout<<"function vala address of x"<<&x<<endl;
    cout<<"function vala address of y"<<&y<<endl;

}
int main(){
    int x = 3;
    int y = 7;
    cout<<"main vala address of x"<<&x<<endl;
    cout<<"main vala address of y"<<&y<<endl;
    //these are actual parameters
    abc(x,y);

}