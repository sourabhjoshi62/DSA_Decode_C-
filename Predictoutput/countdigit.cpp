#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter a number :";
    cin>>n;
    //for(i=0;i<=10;i++){
    //while(n/=10){
    //count++;
    
    while(n>0){
    n/=10;
    count++;
    }
    
    cout<<count;

}