#include<iostream>
using namespace std;
int main(){
int cp;
int sp;
cout<<"Enter a cost price :";
cin>>cp;
cout<<"Enter a selling price :";
cin>>sp;

if(sp>cp)
cout<<"profit of"<<sp-cp;
else if(sp<cp)
cout<<"loss of"<<cp-sp;
else 
cout<<"no profit no loss";
}