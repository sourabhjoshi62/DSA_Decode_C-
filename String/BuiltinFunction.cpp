#include<iostream>
using namespace std;

int main() {
    string str = "Ramesh is good boy";
    cout<<str.size()<<endl;
    cout<<str.length()<<endl;
    str.push_back(' ');
    str.push_back('w');
    cout<<str<<endl;
    str.pop_back();
    cout<<str;
}
