#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n=1;
    int idx=-1;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);
    

   for(int i=0; i < v.size() ; i++) {
       if(v[i]==n) idx=i;

    }
    cout<<idx<<endl;

    for(int i=v.size()-1;i>=0;i--){
     if(v[i]==n) idx=i;
     break;

    }
    cout<<idx;
    

   
}