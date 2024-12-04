#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[13]={4,7,44,47,74,77,444,447,474,744,747,774,777};
    bool flag=true;
    for(int i=0;i<13;i++){
        if(n%arr[i]==0){
            flag=false;
            break;
        }
    }
    if(flag==false){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}