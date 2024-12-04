#include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter a number :";
cin>>x;

if((x%3==0 || x%5==0)&& x%15==0)
cout<<"condition not valid(Divisible by 15)";
else
cout<<"Given number is divisible by 3 or 5";

}