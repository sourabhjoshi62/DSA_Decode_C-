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
    int sum=1;
    for(int i=0;i<=n-1;i++){
       sum=sum*arr[i];
    }
    cout<<sum;
}