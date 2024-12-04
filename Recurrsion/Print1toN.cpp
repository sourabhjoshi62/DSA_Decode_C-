#include<iostream>
using namespace std;
int k=1;
void fun(int n){
    //int k=1;
    if(n==0) return;
    cout<<k<<endl;
    k++;
    fun(n-1);
}
int main(){
    fun(6);
}