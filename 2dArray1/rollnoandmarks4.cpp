#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter no of students :";
    cin>>a;
    
    int arr[2][a],n;
    cout<<"Enter roll no and folled ny mark :";
    for(int i=0;i<2;i++){
        for(int j=0;j<a;j++){
          cin>>arr[i][j]  ;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<a;j++){
          cout<<arr[i][j]<<"   "  ;
        }
        cout<<endl;
    }
}