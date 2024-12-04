#include<iostream>
using namespace std;
int main(){
int ch;
char x;
cout<<"Enter a character :";
cin>>x;
//cout<<(int)x;
ch=(int)x;
if((ch>=97 && ch<=122) || (ch>=65 && ch<=90)){
cout<<"Given character is an aplhabet";}
else
cout<<"Given character is not an aplhabet";



}