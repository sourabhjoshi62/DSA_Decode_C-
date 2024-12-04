#include<iostream>
#include <string>
#include<vector>
using namespace std;
void removeChar(string ans,string original,vector<string>&v){
    if(original==""){
        //cout<<ans<<endl;
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    removeChar(ans,original.substr(1),v);
    removeChar(ans+ch,original.substr(1),v);
}

int main(){
    string str="abc";
    vector<string>v;
    removeChar("",str,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    //return 0;
}