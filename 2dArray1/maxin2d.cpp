#include<iostream>
using namespace std;
int main(){
    int m,n;
    //int arr[m,n];
    cout<<"Enter no of rows :";
    cin>>m;
    cout<<"Enter no of columns :";
    cin>>n;
    int arr[m][n];
    cout<<"Enter elements :";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];    
        }
        cout<<endl;
    }
    int max = arr[0][0];
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max)max=arr[i][j];    
        }

    }
    cout<<max;
}