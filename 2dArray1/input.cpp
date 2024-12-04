#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter no of rows :"<<endl;
    cin>>a;
    cout<<"Enter no of columns :";
    cin>>b;
    int arr[a][b],n;
    cout<<"Enter elements :";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
          cin>>arr[i][j]  ;
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
          cout<<arr[i][j]<<" "  ;
        }
        cout<<endl;
    }
}