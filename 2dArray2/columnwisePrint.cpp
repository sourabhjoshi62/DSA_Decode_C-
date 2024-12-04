#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter no of rows in matrix 1 :";
    cin>>a;
    cout<<"Enter no of columns in matrix 1 :";
    cin>>b;
   

    cout<<"Enter elements of first matrix :"<<endl;
    int mat1[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>mat1[i][j];
        }
    }
   
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
          cout<<mat1[i][j]<<" ";   
        }
        cout<<endl;
    }
}
