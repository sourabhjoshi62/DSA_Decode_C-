#include<iostream>
#include <string>
#include<vector>
using namespace std;
void removeChar(string ans,string original,vector<string>&v,bool flag){
    if(original==""){
        //cout<<ans<<endl;
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    if(original.length()==1){
    if(flag==true) removeChar(ans+ch,original.substr(1),v,true);
    removeChar(ans,original.substr(1),v,true);
    return;
    }
    char dh=original[1];
    if(ch==dh){
    if(flag==true) removeChar(ans+ch,original.substr(1),v,true);
    removeChar(ans,original.substr(1),v,false);
    }
    else{
    if(flag==true) removeChar(ans+ch,original.substr(1),v,true);
    removeChar(ans,original.substr(1),v,false);
}
    
}

int main(){
    string str="abc";
    vector<string>v;
    removeChar("",str,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    //return 0;
}