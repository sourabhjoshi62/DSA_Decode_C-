#include<iostream>
using namespace std;
int main(){
int x,y,z;
cout<<"Enter a number :";
cin>>x;
cout<<"Enter a number :";
cin>>y;
cout<<"Enter a number :";
cin>>z;


if(x>y && x>z)
cout<<"Greatest of them is "<< x;
else if(y>x && y>z)
cout<<"Greatest of them is "<< y;
else if(z>x && z>y)
cout<<"Greatest of them is "<< z;
else
cout<<"all are equal";


}