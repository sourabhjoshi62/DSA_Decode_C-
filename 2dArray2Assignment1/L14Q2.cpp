#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,l,m;
    

    cout<<"Enter rows no of matrix 1:";
    cin>>a;
    cout<<"Enter column no of matrix 1:";
    cin>>b;
    int arr[a][b];
    cout<<"Enter elements :";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
           // arr[i][j]=10;
            cin>>arr[i][j];
        }
    }
    cout<<"Enter rows no of matrix 2:";
    cin>>c;
    cout<<"Enter column no of matrix 2:";
    cin>>d;
    int arr2[c][d];
    cout<<"Enter elements :";
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
           // arr[i][j]=10;
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            cout<<arr2[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;

    cout<<"Resultant :"<<endl;
    int res[l][m];
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
          res[i][j]=arr[i][j]+arr2[i][j];
          cout<<res[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;




}