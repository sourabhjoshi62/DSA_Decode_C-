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
    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);

    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    reverse(0, 3, v);
   

    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }cout<<endl;


    return 0;
}