#include<iostream>
#include<vector>
using namespace std;
void reverse( int i,int j, vector<int>&v){
    while(i<=j){
        int temp= v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int k;
    cout<<"Enter a number :";
    cin>>k;
    
    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);

    int n= v.size();

    cout<<"Original Array :"<<" ";
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    
    if(k>n) k=k%n;
    reverse(0, n-k-1,v);
    reverse(n-k,n-1,v);
    reverse(0,n-1,v);


   
    cout<<"Rotated Array :"<<" ";
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }cout<<endl;


    return 0;
}