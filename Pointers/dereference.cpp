#include<iostream>
using namespace std;
int main(){
    
    int x=4;
    int* p=&x;
    cout<<*p<<endl;
    *p=7;
    cout<<&(x)<<endl;//0x61ff0c......address
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<x<<endl;

}