#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter total number of elements :";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
       cin>>arr[i];
    }
    int min=arr[0];
    for(int i=0;i<=n-1;i++){
       if(min>arr[i])
       min=arr[i];
    }
    cout<<min;
}