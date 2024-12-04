#include<iostream>
using namespace std;
int main(){
    
    int x;
    int* p=&x;
    cout<<&(x)<<endl;//0x61ff0c......address
    cout<<p<<endl;

    float y=3.8;
    float* b=&y;
    cout<<&y<<endl;
    cout<<b;
}