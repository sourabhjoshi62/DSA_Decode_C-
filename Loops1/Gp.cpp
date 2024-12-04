#include<iostream>
using namespace std;
int main(){

    int n;
    int a=1;
    cout<<"Enter number of times :";
    cin>>n;
   

//Gp of 1,2,4,8,16.......ntimes
    /*for(int i=1;i<=(2*n)-1;i+=2)
    {
        cout<<i<<endl;
    }*/

    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
        a*=2;
    }

}