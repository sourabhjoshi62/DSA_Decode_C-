#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sq;
    sq=n*n;
    int ld;
    ld=sq%10;
    if(ld==n){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}