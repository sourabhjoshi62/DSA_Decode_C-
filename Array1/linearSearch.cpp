#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"Enter total number of elements :";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
       cin>>arr[i];
    }
    cout<<"Enter number you want to find :";
    cin>>x;
    bool flag=false;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag=true  ;
    }
    if(flag==true)cout<<"Found";
    else cout<<"error404";
}