#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter a Number :";
    cin>>x;
    //ternary 
    //condition ? true : false;
    (x%2==0) ? cout<<"Even" : cout<<"Odd";
}