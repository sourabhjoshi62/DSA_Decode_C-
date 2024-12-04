#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_front(9);
    for(auto it=v.begin();it !=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it : v){
        cout<<it<<" ";
    }


}