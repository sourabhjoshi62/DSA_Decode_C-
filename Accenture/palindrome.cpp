#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int size=a.size();
    int i=0;
    int j=size-1;
    bool isp=true;
    while(i<=j){
        if(a[i] != a[j]){
            isp=false;
            cout<<"False";
            break;
        }

         
        i++;
        j--;
    }
    if(isp==true){
        cout<<"True";
    }
    

}