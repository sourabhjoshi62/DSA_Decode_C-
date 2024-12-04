#include<iostream>
using namespace std;
int main()

{    int x;
      cout<<"Enter a number :";
    cin>>x;
    int a=1;
    for(int i=1;i<=x;i++)
    {
        a *= i;
        cout<<a<<endl;
    }
   // cout<<a<<endl;
}