#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a string :";
    string s;
    cin>>s;
    cout<<s<<endl;
    cout<<s.substr(0)<<endl;
    cout<<s.substr(0,4);
}