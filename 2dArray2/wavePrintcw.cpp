#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter no of rows in matrix :";
    cin>>a;
    cout<<"Enter no of columns in matrix :";
    cin>>b;
    int arr[a][b];
    cout<<"Enter elements :"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Your elements :"<<endl;
    for(int i=a-1;i>=0;i--){
        if(i%2 ==0){
            for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
            
        }
        }
        else{
            for(int j=b-1;j>=0;j--)
            cout<<arr[i][j]<<" ";
        }
        }
        
    }
 for(int h=0;h)