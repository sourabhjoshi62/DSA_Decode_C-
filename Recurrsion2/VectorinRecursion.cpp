#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v,int idx){
    if(idx==v.size())return;
    cout<<v[idx]<<" ";
    display(v,idx+1);

}
int main(){
    vector<int>v;
    cout<<"Enter :";
    for(int i=0;i<6;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
       
    // cout<<endl;
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    display(v,0);
}