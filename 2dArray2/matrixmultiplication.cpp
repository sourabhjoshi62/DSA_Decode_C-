#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter no of rows in matrix 1 :";
    cin>>a;
    cout<<"Enter no of columns in matrix 1 :";
    cin>>b;
    cout<<"Enter no of rows in matrix 2 :";
    cin>>c;
    cout<<"Enter no of rows in matrix 2 :";
    cin>>d;
    if(b==c){

    cout<<"Enter elements of first matrix :"<<endl;
    int mat1[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter elements of second matrix :"<<endl;
    int mat2[c][d];
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            cin>>mat2[i][j];
        }
    }
    
    cout<<"Resultant matrix :"<<endl;
    int res[a][d];
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
           // cin>>mat1[c][d];
           res[i][j]=0;
           for(int k=0;k<c;k++){
            res[i][j] += mat1[i][k] * mat2[k][j];
           }
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
           // cin>>mat1[c][d];
          cout<<res[i][j]<<" ";
           
        }
        cout<<endl;
    }
}
}
/*else{
cout<<"..........Invalid.............";
}*/
