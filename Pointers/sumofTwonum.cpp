#include<iostream>
using namespace std;
int main(){
    
    int x=3,y=5;
    int* p=&x;
    int* p1=&y;
    cout<<*p + *p1; 
    
}